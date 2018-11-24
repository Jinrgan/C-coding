#include <stdio.h>

int main() 
{
	int i, j;
	char ch;

	for(;;) {

	printf("input a charactor:");
	scanf("%c", &ch);
	if (ch == '#')
		break;
	if (ch < 'A' || ch > 'Z') {
		getchar();
		continue;
	}

	getchar();

	for (i = 0; i <= ch - 'A'; i++) 
	{
		for (j= 0; j < i; j++)
			printf("_");

		for (j= 0; j <= i; j++)
			printf("%c", ch - j);
		printf("\n");
	}

	}

	return 0;
}
