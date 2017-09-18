#include "strtrim.h" 		/* for consistency */
#include <stdio.h>		/* for puts */
#include "stdlib.h"				/* for malloc */

char *strtrim(char *src, char *dest, int trim)
{
	char *buffer, *pBuffer, *pStr;
	int index = 0;
  pBuffer = buffer = (char *)malloc(trim); // allocate memory to hold  copy 
  for (pStr = copy; *pStr && index < trim; pStr++)
	{ // duplicate 
    *(pBuffer++) = *pStr;
		index ++;
	}
  *pBuffer = 0;			// terminate copy 
  return buffer;
}