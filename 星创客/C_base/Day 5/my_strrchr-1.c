#include "my_strrchr.h"

char * my_strrchr(const char *s, int c);
{
	char * pr;
		
	if(NULL == *s)
		return NULL;
	
	while(*s)
	{
		if(c == *s)
			pr = s;
		s++;
	}
	return pr;
	
	if('\0' == c)
		return s;
	else return NULL;
}