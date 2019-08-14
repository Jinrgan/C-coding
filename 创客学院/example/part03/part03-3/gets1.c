#include <stdio.h>

#define N 15

int main() 
{
	char s[N] = {0};

	printf("input a string:");

	gets(s);

	printf("s=%s\n", s);

	return 0;
}
