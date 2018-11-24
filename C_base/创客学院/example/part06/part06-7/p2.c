#include <stdio.h>

int main()
{
	char * s[4] = {"how", "are", "you", "welcome"};
	char **  p;
	int i;

	p = s;//&s[0];

	for (i = 0; i < 4; i++) {
		printf("%s %s %s %s\n", s[i], *(p+i), p[i], *(s+i));
	}



	return 0;
}
