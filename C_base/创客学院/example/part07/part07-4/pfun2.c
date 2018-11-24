#include <stdio.h>
#include <string.h>

char * del_space(char * s);

int main() 
{
	char str[]= "   how  are  you?";

	puts(str);

	printf("%s\n", del_space(str)); 

	puts(str);

	return 0;
}

char * del_space(char * s) {
	char * r = s, * p = s;

	while (*s != '\0') {
		if (*s == ' ') {
			s++;
		}
		else {
			*p = *s;
			s++;
			p++;
		}
	}
	*p = *s;

	return r;
}
