#include "stdio.h"

/*自己实现一个字符串比较的函数，任意给定两个字
*符串，如果前一个大，则返回>0的值，如果后一个
*大，则，返回<0的值，如果相等，则，返回0
*/

int myStrcmp(char *s, char *t)
{
	if(NULL == s || NULL == t)
	{
		return 0;
	}
	if(NULL == s)
	{
		return -1;
	}
	if(NULL == t)
	{
		return 1;
	}
	while(*s && *t && !(*s - *t))
	{
		s++;
		t++;
	}
	return *s - *t;
}

void main()
{
	char s1[] = "advzfsart", s2[] = "fgterywrt";
	char * ps1, * ps2;
	int ret;
	
	ps1 = s1; ps2 = s2;
	
	ret = myStrcmp(ps1, ps2);
	
	printf("%d\n", ret);
}