#include <stdio.h>

int main() 
{
	int a[6] ={1,4};
	//static int a[6];
	int i;

	for (i = 0; i < 6; i++) {
		printf("%d\n", a[i]);
	}


	return 0;
}
