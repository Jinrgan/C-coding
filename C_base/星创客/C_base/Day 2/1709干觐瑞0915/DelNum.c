#include <stdio.h>

int main()
{
	char s[] = "abc123de4fg56";
	char s2[sizeof(s)] = {};
	
	int i = 0, j = 0;
	for(i=0; i<sizeof(s); i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s2[j] = s[i];
			j++;
		}
	}
	
	for(i=0; i<=j; i++)
	{
		printf("%c", s2[i]);
	}
	puts(" ");
}