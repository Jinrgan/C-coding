#include <stdio.h>
#include <string.h>

int main() 
{
	char s[] = "Hello world!";
	char * p = s;

	//gets(p);
	//scanf("%s", s);
	//scanf("%s", p);

	printf("%d %d\n", sizeof(s), sizeof(p));
	printf("%d %d\n", strlen(s), strlen(p));

	puts(s);
	puts(p);


	return 0;
}
