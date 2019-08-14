#include <stdio.h>

int main()
{
	char s[] = {'a', 'b', 'c'};
	//char s[] = "abc";
	int i;

	for (i = 0; i < sizeof(s); i++) {
		printf("%c, %d\n", s[i], s[i]);
	}

	return 0;
}