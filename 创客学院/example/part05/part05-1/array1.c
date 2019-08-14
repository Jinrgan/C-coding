#include <stdio.h>

int main() 
{
	int i= 10;
	int a[6] = {0};
	int b[i];// = {0};

	printf("%d\n", sizeof(a));
	printf("%d\n", 6 * sizeof(int));

	printf("a=%p &a[0]=%p\n", a, &a[0]);
	//a++;
	//printf("%d\n", a[6]);

	i = 5;
	printf("sizeof(b)=%d\n", sizeof(b));

	return 0;
}
