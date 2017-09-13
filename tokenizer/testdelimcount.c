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
	char *s3 = "h e llo worl d";
	expected = 4;
	printf("%s\n", delimcount(s3, ' ')==expected ? "pass": "not pass");
	char *s4 = "he llo   . ";
	expected = 5;
	printf("%s\n", delimcount(s4, ' ')==expected ? "pass": "not pass");
	char *s5 = "    he llo.   . ";
	expected = 9;
	printf("%s\n", delimcount(s5, ' ')==expected ? "pass": "not pass");
	char *s6 = "";
	expected = 0;
	printf("%s\n", delimcount(s6, ' ')==expected ? "pass": "not pass");
	char *s7 = " ";
	expected = 1;
	printf("%s\n", delimcount(s7, ' ')==expected ? "pass": "not pass");
	char *s8 = "      ";
	expected = 6;
	printf("%s\n", delimcount(s8, ' ')==expected ? "pass": "not pass");
}