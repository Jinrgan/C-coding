#include <stdio.h>

int main()
{
    int i, j;
    
    for(i=1, j=1; i<=9; i++)
    {
		printf("%d*%d=%2d\t", i, j, i*j);
		if(i == j)
		{
			i = 0;
			j++;
			printf("\n");
		}
    }
	printf("\n");
    return 0;
}