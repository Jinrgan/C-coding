#include "my_memcpy.h"

void * my_memcpy(void * s2, const void * s1, int size)
{
	if(NULL == s1 || NULL == s2 || 0 == size)
		return NULL;
	
	int i = 0;
	while(i < size && s1[i])
	{
		s2[i] = s1[i];
		i++;
	}	
	
	return s2;
}