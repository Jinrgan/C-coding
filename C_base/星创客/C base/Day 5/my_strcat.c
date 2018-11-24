#include "my_strcat.h"

char * my_strcat(char * dest, const char * src)
{
	if(NULL == dest || NULL == src)
		return NULL;

	int i = 0;

	char * pdest = dest;
	while(*dest)
		pdest++;
	
	while(*src)
	{
		*pdest++ = *src++;
	}
	*pdest = '\0';

	return dest;
}