#include <stdio.h>

int strtoupper(char * s, int *p);

int main()
{
	char str[] = "sdf2323ASDw";
	int n, m;

	n = strtoupper(str, &m);

	printf("n=%d m=%d str:%s\n", n, m, str);

	return 0;
}

int strtoupper(char * s, int *p) {
	int ret = 0;

	*p = 0;

	while (*s != '\0') {
		if (*s >= 'A' && *s <= 'Z') {
			(*p)++;
		}

		if (*s >= 'a' && *s <= 'z') {
			ret++;
			*s -= ' ';
		}
		s++;
	}

	return ret;
}
