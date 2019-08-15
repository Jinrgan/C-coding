#include <stdio.h>

#define BIT0 0x01
#define BIT5 (0x01 << 5)

/*
有一个英文字符串，（假设字符串很长），该字符串只有大小写英文字符，没有其它字符。
求这个字符串中字母表中的字符各出现多少次。
提示：不区分大小写，例：abcdAbD-->a2,b2,c1,d2
*/
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