#include "my_strcmp.h"

/*�Լ�ʵ��һ���ַ����Ƚϵĺ������������������
*���������ǰһ�����򷵻�>0��ֵ�������һ��
*���򣬷���<0��ֵ�������ȣ��򣬷���0
*/

int my_strcmp(const char *s, const char *t)
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
	printf("%d/t", *s - *t);
}