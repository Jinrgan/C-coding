#include <stdio.h>

void main()
{
	int num[26] = {0}, i = 0;
	
	char c[] = "abcdAbdsfgharHJGOLUOIGH";
	for(i=0; i < sizeof(c)/sizeof(char); i++)
	{
		if(c[i] >= 'a' && c[i] <= 'z')
			num[c[i]-'a']++;
		else if(c[i] >= 'A' && c[i] <= 'Z')
			num[c[i]-'A']++;
	}
	
	for(i=0; i < 26; i++)
	{
		if(num[i])
			{
				printf("%c%d", i+'a', num[i]);
			}
	}
	printf("\n");
}