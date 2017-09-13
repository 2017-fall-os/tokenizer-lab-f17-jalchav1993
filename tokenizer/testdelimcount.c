// for puts
#include <stdio.h>

// for exit
#include <stdlib.h>

#include "delimcount.h"
int main(int argc, char **argv){
	char *s = "hello world";
	int expected = 1;
	printf("%s\n", delimcount(s, ' ')==expected ? "pass": "not pass");
	char *s2 = "hello worl d";
	expected = 2;
	printf("%s\n", delimcount(s2, ' ')==expected ? "pass": "not pass");
}