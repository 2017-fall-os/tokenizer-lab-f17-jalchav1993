// for puts
#include <stdio.h>

// for exit
#include <stdlib.h>

#include "charcount.h"
int main(int argc, char **argv){
	char *s = "hello,world,how,are,you";
	int expected = 5;
	printf("%s\n", charcount(s,',')==expected ? "pass": "not pass");
	//printf("%d", charcount(s,','));
	
}