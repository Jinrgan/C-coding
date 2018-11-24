#include "str_cat.h"

void str_cat(const char * s1, char * s2, int size)
{
	if(NULL == s1 || NULL == s2 || 0 == size)
		return 0;
	
	int i = 0;
	while(i < size && s1[i])
	{
		s2[i] = s1[i];
		i++;
	}	
}