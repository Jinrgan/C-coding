#include <stdio.h>

int main() 
{
	char ch;
	int m;
	float n;

	printf("input a character:");
	scanf("%c", &ch);

	printf("input a num:");
	scanf("%d", &m);

	printf("input a real:");
	scanf("%f", &n);

	printf("ch=%c %d %#x\n", ch, ch, ch);
	printf("m=%d\n", m);
	printf("n=%f\n", n);

	return 0;
}
