#include "charcount.h" 		/* for consistency */
#include "stdlib.h"				/* for malloc */
int charcount(char *inStr, char delim)	/* like strdup */
{
  char *pStr;
  for (pStr = inStr; *pStr; pStr++) // count # chars in str
		if(*pStr == delim) break;
	return pStr - inStr;
}