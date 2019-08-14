#include <stdio.h>

int main()
{
	unsigned char x = 0x17, y = 0x3a, z;

	//y = ~x;
	
	z = x ^ y;

	printf("z=%#x\n", z);

	return 0;
}

