#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "hello";
	char s2[] = {'l', 'l', 'o', '\0'};

	strcpy(s2, s1);

	puts(s1);
	puts(s2);

	return 0;
}
