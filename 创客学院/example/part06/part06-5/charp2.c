#include <stdio.h>
#include <string.h>

int main() 
{
	char s1[] = "welcome";
	char s2[] = "welcome";
	char * p = "welcome";
	char * q = "welcome";

	//*p = 'W';
	printf("%p %s\n", s1, s1);
	printf("%p %s\n", s2, s2);

	printf("%p %s\n", p, p);
	printf("%p %s\n", q, q);

	return 0;
}
