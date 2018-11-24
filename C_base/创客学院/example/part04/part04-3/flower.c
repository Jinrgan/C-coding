#include <stdio.h>

int main() 
{
	int i = 100, a, b, c;

	while (i <= 999) {
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		
		if (a*a*a + b*b*b + c*c*c == i) {
			printf("%d\n", i);
		}

		i++;
	}


	return 0;
}


