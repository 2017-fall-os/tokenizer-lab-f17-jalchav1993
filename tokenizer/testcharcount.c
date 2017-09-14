// for puts
#include <stdio.h>

// for exit
#include <stdlib.h>

#include "charcount.h"
int main(int argc, char **argv){
	char *s = "hello";
	int expected = 5;
	printf("%s\n", charcount(s)==expected ? "pass": "not pass");
	char *s2 = "hel";
	expected = 3;
	printf("%s\n", charcount(s2)==expected ? "pass": "not pass");
	char *s3 = "hel,,,";
	expected = 6;
	printf("%s\n", charcount(s3)==expected ? "pass": "not pass");
	char *s6 = "";
	expected = 0;
	printf("%s\n", charcount(s6)==expected ? "pass": "not pass");
	char *s7 = " ";
	expected = 0;
	printf("%s\n", charcount(s7)==expected ? "pass": "not pass");
	char *s8 = "      \n";
	expected = 0;
	printf("%s\n", charcount(s8)==expected ? "pass": "not pass");
}