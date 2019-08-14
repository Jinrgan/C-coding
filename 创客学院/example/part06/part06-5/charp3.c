#include <stdio.h>
#include <string.h>

#define N 100

int main() 
{
	char s1[N] = "welcome";
	char s2[] = " to beijing";
	char *p, *q;

	p = s1;
	while (*p != '\0') {
		p++;
	}
	q = s2;

	/*
	while (*q != '\0') {
		*p = *q;
		p++;
		q++;
	}
	*p = *q;
	*/
	while (*p++ = *q++);

	puts(s1);
	puts(s2);


	return 0;
}
