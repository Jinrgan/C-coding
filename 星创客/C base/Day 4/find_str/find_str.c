#include "my_strcmp.h"

int main()
{
	char s[] = "advzfsart", s2[] = "sar";
	int pos = -1, nmem, dnmem;
	char * ps = s;
	nmem = sizeof(s);
	dnmem = sizeof(s2);
	
	scanf("%c", &ch);
	
	int i;
	for(i=0; i < nmem - dnmem; i++)
	{
		if(!(my_strcmp(&ps[i], &s2)))
		{
			pos = i;
			printf("%d", pos);
		}
	}
	
	puts(" ");
}