#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "mytoc.h"


/* @author: Jesus Chavez
 * @description: reads user imput buffer, copies it into a string
 * @returns: user input string
 */
char * uinteraction(){

  char userin[3333]; 																							/* Buffer of 3333 bytes*/
		
  putchar('~');																										/* printing cursor for visual aid */ 
  tread(userin);																									/* reading input	 */
	
  char * tksequence = (char *)malloc(3333);															/* allocates memory for user input string */
  strcopy(tksequence, userin, '\0');																		/* copies buffer into input string */
  
  return tksequence;
}

/* @author: Jesus Chavez
 * @description: reads user imput
 */
void tread(char * buffer)
{
	while((*buffer++ = getchar())!= EOF)														/* reads user input */
		;
}
/* @author: Jesus Chavez
 * @description: copies a string
 */
void strcopy(char *dest, char *src, char delim)
{ 
	int i = 0;
	while(ischar(*(src+i), delim))																	/* checks if char, eof, delimiter */
	{
		*(dest+i) = *(src+i);
		i++;
	}
	*(dest+i ) = '\0';
}
/* @author: Jesus Chavez
 * @description: counts the chars using a delimiter
 * @returns: # chars
 */
int tcount(char *str,int start, char delim){
  int counter = 0;
  while(ischar(*(str+start+counter), delim))											/* checks if char, eof, delimiter */
	{
		counter++;
	}
	
  return counter;
}
int ischar(char c, char delim)
{
	return ((c != delim) && (c != '\0'));														/* checks if char, eof, delimiter */
}
int dcount(char *str, char delim)
{
	int counter=1;
	while(*str)
	{
		str+=1;
		if(*str == delim) counter++;
	}
	return counter;
}
/* @author: Jesus Chavez
 * @description: tokenizes a string
 * @returns: token datastructure
 */
char ** mytoc (char *str, char delim) 
{
  int tkpos = 0; 																									/* index of token */
  int step = 0;
	int nsize = dcount(str, delim);
  char **tokens = (char **)calloc(nsize, sizeof(char *)*3333); 	/* allocation of tokens datastructure */
	
  while(*(str+step-1))																							/* traverses the string */
  {
		int tksize = tcount(str, step, delim);												/* size of next token */
	  tokens[tkpos] = (char*) malloc(tksize);												/* malloc */
		strcopy(tokens[tkpos], str+step, delim);											/* copying the string to tokens datastructure*/
		step+= tksize + 1;																						/* size of next step */
		tkpos++;																											/* advance to next position */
  }
	tokens[tkpos] = (char*) malloc(1);
	tokens[tkpos] = NULL;
  return tokens;
}

