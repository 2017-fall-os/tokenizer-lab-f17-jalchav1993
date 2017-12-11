#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "mytoc.h"
char * compareStr(char *to, char *from);
int main(void)
{
	char * testcase1 = "Look at me now, a shadow, of the man I, used to be";
	char * testcase2 = "Look at me now, a shadow, of the man I, used to be";
	char * tokencase1[5] = {
		"Look at me now",
		" a shadow",
		" of the man I",
		" used to be",
		NULL
	};
	char * tokencase2[15] = {
		"Look","at","me","now,",
		"a","shadow,","of",
		"the","man","I,","used",
		"to","be",NULL
	};
	
	int t0 = tcount(testcase1, 0, ' ');
	int t1 = tcount(testcase1, 0, ',');
	int t2 = tcount(testcase1, 15, ',');
	int t3 = tcount(testcase1, 35, ',');
	int t4 = tcount(testcase1, 0, '\0');
	
	printf("1: %d, %s\n", t0,  (t0 == 4) ? "PASS":"FAIL");
	printf("2: %d, %s\n", t1, (t1 == 14) ? "PASS":"FAIL");
	printf("3: %d, %s\n", t2, (t2 == 9) ? "PASS":"FAIL");
	printf("4: %d, %s\n", t3, (t3 == 6) ? "PASS":"FAIL");
	printf("5 %d, %s\n", t4, (t4 == 53) ? "PASS":"FAIL");
	
	char ** mytoctest1 = mytoc(testcase1, ',');
	for(int i = 0; i <= 4; i++)
	{
		printf("%s|%s|%s\n", mytoctest1[i], tokencase1[i], compareStr(mytoctest1[i], tokencase1[i]));
	}
	char ** mytoctest2 = mytoc(testcase2, ' ');
	for(int i = 0; i <= 14; i++)
	{
		printf("%s|%s|%s\n", mytoctest2[i], tokencase2[i], compareStr(mytoctest2[i], tokencase2[i]));
	}
}
char * compareStr(char *to, char *from)
{
	if((to == NULL)&&(from == NULL))
		return "PASS";
	if((to == NULL)||(from == NULL))
		return "FAIL";
	if(tcount(to, 0, '\0')!= tcount(from, 0, '\0'))
		return "FAIL";
	
	while((*to++)&&(*from++)&&(*to == *from))
		;
	return "PASS";
}