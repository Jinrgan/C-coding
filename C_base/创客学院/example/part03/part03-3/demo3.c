#include <stdio.h>

int main() 
{
	int m = 0;
	char ch = '\0';

	scanf("%d", &m);
	//scanf(" %c", &ch);
	scanf("%*c%c", &ch);

	printf("m=%d\n", m);
	printf("ch=%d,%c\n", ch, ch);

	return 0;
}
