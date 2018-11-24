#include <stdio.h>

#define N 10

int main() 
{
	char s[N] = {0}, t;
	int i, j;

	while (gets(s) != NULL) {
		i = 0;
		j = 0;

		while (s[j] != '\0') {
			j++;
		}
		j--;

		while (i < j) {
			t = s[i];
			s[i] = s[j];
			s[j] = t;
			i++;
			j--;
		}

		puts(s);
	}

	return 0;
}
