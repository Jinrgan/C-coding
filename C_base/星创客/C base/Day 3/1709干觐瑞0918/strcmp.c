#include <stdio.h>

/*�Լ�ʵ��һ���ַ����Ƚϵĺ������������������
*���������ǰһ�����򷵻�>0��ֵ�������һ��
*���򣬷���<0��ֵ�������ȣ��򣬷���0
*/

int strcmp(char *s, char *t)
{
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
	
	ret = strcmp(ps1, ps2);
	
	printf("%d\n", ret);
}