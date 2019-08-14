#include <stdio.h>

int main() 
{
	int i;
	char ch;

	printf("input a charactor:");
	scanf("%c", &ch);

	for (i = 0; i <= ch - 'A'; i++) 
		printf("_\n");


	return 0;
}
