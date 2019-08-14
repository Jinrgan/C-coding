#include <stdio.h>
#include <math.h>

int main()
{
	int i = 100, a, b, c;
	
	while (i < 1000){
		a = i / 100; //1 123/100
		b = (i / 10) % 10;
		c = i % 10; //3

		//if (i == a*a*a + b*b*b + c*c*c)
		if (i == pow(a, 3) + b*b*b + c*c*c)
			printf("%d\n", i);
		i++;
	}

	return 0;
}
