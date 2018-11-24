#include "my_strcmp.h"

int main()
{
	char s[] = "advzfsart", ch;
	int pos = -1, nmem;
	char * ps = s;
	nmem = sizeof(s);
	
	scanf("%c", &ch);
	
	int i;
	for(i=0; i<nmem; i++)
	{
		if(my_strcmp(&ps[i], &ch))
		{
			pos = i;
			//printf("s[%d] = %c\t", pos, s[pos]);
		}
	}
	
	puts(" ");
}