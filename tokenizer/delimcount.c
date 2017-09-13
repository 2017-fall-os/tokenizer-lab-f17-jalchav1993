#include "delimcount.h" 		/* for consistency */
#include "stdlib.h"				/* for malloc */

int delimcount(char *inStr, delim)	/* like strdup */
{
	int count = 0;
  for (pStr = inStr; *pStr; pStr++) // count # chars in str
		count = (*pStr == delim) ? : 0, delimcount+1;
  return count;
}
