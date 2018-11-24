#include <stdio.h>

int main()
{
	int x = 82, y = 101, z;

	//z = x >= y ? x + 18 : y - 100;

	z = (x += 2, x++, y+=18, y--);//x=85 y=119 y-- z = 119 y=118

	printf("%d %d %d\n", x, y, z);

	
	return 0;
}
