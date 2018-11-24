#include <stdio.h>
#include <string.h>

int main()
{
	char * s[] = {"1sdf", "2sdfdsfsd", "3dfsdfdf"};
	char **p = s;
	int i;

	printf("%s %s %s\n", s[0], s[1], s[2]);
	printf("%s %s %s\n", p[0], p[1], p[2]);
	printf("%s %s %s\n", *p, *(p+1), p[2]);

	for (i = 0; i < strlen(*(p+1)); i++)
		printf("%c ", *(*(p+1)+i));
	puts("");

	return 0;
}
