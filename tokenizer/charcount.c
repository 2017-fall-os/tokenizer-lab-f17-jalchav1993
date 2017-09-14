#include "charcount.h" 		/* for consistency */
#include "stdlib.h"				/* for malloc */
int charcount(char *inStr)	/* like strdup */
{
  char *pStr;
  for (pStr = inStr; *pStr; pStr++) // count # chars in str
    ;
	return pStr - inStr;
}