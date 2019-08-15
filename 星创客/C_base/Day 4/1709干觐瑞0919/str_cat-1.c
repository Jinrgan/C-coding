#include "str_cat.h"

void str_cat(const char * s1, char * s2, int size)
{
	if(s1 == NULL || s2 == NULL)
		printf("error");
	
	int i = 0;
	while(i < size || s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
}