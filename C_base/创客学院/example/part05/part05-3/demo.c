#include <stdio.h>

#define N 10

int main() 
{
	char s[10] = {0}, t;
	int i, j;

	while ( gets(s) != NULL) {
		j = 0;
		while (s[j] != '\0') {
			j++;
		}
		j--;

		i = 0;
		while (i < j) {
			t = s[i];
			s[i] = s[j];
			s[j] =t;
			i++;
			j--;
		}

//		putchar(s[j]);

		puts(s);
	}

	return 0;
}
