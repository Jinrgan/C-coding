#include <stdio.h>

#define BIT0 0x01
#define BIT5 (0x01 << 5)

void main()
{
	int num[26] = {0}, i = 0;
	
	char c[] = "abcdAbdsfgharHJGOLUOIGH";
	for(i=0; i < sizeof(c); i++)
	{
		c[i] |= BIT5;
		num[c[i]-'a']++;
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