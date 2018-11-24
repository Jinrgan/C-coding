#include "stdio.h"

/*�Լ�ʵ��һ���ַ����Ƚϵĺ������������������
*���������ǰһ�����򷵻�>0��ֵ�������һ��
*���򣬷���<0��ֵ�������ȣ��򣬷���0
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