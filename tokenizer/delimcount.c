#include "delimcount.h" 		/* for consistency */
#include "stdlib.h"				/* for malloc */

int delimcount(char *inStr, int delim)	/* like strdup */
{
	int count = 0;
	char *pStr;
  for (pStr = inStr; *pStr; pStr++) /*count # chars in str*/
	{
		if (*pStr == delim)
		{
			count ++;
		}
		
	}
  return count;
}
