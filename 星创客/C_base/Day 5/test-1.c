#include "my_strcat.h"

int main()
{
	char s[] = "advzfsart";
	char * ps = s;
	int i;
	
	char s2[100] = {};
	char * ps2 = s2;

	my_strcat(ps2, ps);
	
	for(i=0; i<9; i++)
	{
		printf("%c", s2[i]);
	}
	
	puts(" ");
	
	return 0;
}