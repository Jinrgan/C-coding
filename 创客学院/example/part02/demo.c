#include <stdio.h>

void fun() 
{
	int m = 100;
	printf("fun:m=%d\n",m);
}

int main() 
{
	{
		int m = 10;
		printf("m=%d\n",m);
	}

	fun();

	return 0;
}
