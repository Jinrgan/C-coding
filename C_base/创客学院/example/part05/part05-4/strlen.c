#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "hello";
	char s2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char s3[] = {'h', 'e', '\0', 'l', 'o', '0'};
	//char s4[] = "ab\nc";
	char s4[] = "ab\x31\061";
	int i;

	printf("%d %d\n", strlen(s1), sizeof(s1));
	printf("%d %d\n", strlen(s2), sizeof(s2));
	printf("%d %d\n", strlen(s3), sizeof(s3));
	printf("%d %d\n", strlen(s4), sizeof(s4));

	for (i = 0; i < sizeof(s4); i++) {
		printf("%c, %d\n", s4[i], s4[i]);
	}

	return 0;
}
