#include <stdio.h>

void main()
{
	int num = 3245, c[4] = {0};
	
	int i;
	for (i=0; i<4; i++) {
		c[i] = num%10;
		num = num/10;
		printf("%d\t",c[i]);
	}
	printf("\n");
}