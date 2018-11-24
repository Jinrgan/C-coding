#include "str_cmp_hash.h"

int main(int argc, const char * argv[])
{
	printf("argc=%d\r\n", argc);
	int i = 0;
	for(i=0; i<argc; i++)
	{
		printf("%d: %s\r\n", i, argv[i]);
	}
	
	char * s1 = "account";
	
	char * pmin;
	pmin = str_cmp_hash(s1, argv[1]);
	if(!pmin)
		printf("search error\n");
	else 
		printf("the possion is: %d\n", (int)(pmin - s1));
		
	return 0;
}