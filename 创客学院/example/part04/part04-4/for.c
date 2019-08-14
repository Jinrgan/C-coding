#include <stdio.h>

int main() 
{	
	int i = 1, sum = 0;

	for (; i <= 100;) {
	//for (;;) {
		sum += i;
		i++;
	}

	printf("1+2+...+100=%d\n", sum);

	return 0;
}
