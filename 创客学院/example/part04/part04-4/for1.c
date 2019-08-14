#include <stdio.h>

int main() 
{	
	int i, j;
	char ch;

	for (;;) {

		printf("input a charactor:");
		scanf("%c",&ch);
		getchar();

		if (ch < 'A' || ch > 'Z') {
			printf("input error\n");
			return 0;
		}

		for (i = 0; i <= ch - 'A'; i++) {
			for (j = 0 ; j < i; j++) {
				printf("_");
			}

			for (j = 0; j <= i; j++) {
				printf("%c", ch-j);
			}

			printf("\n");
		}
	}


	return 0;
}
