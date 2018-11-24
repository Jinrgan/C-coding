#include "str_cat.h"

int main()
{
	char s[] = "advzfsart";
	char * ps = s;
	int i;
	
	char s2[SIZE] = {};
	char * ps2 = s2;

	str_cat(ps, ps2, SIZE);
	
	for(i=0; i<SIZE; i++)
	{
		printf("%c", s2[i]);
	}
	
	puts(" ");
	
	return 0;
}