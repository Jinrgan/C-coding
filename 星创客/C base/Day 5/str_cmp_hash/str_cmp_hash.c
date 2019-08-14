#include "str_cmp_hash.h"

char * str_cmp_hash(const char * pc, const char * pr)
{
	if(NULL == pc || NULL == pr)
		return NULL;
	
	int len;
	len = strlen(pr);
	char * pos[len], * min_pos = NULL;
	min_pos = strrchr(pc, '\0');
	
	int i;
	for(i = 0; i < len; i++)
	{
		pos[i] = strchr(pc, pr[i]);
		if(pos[i] < min_pos && pos[i])
			min_pos = pos[i];
	}
	
	return min_pos;
}