#include <stdio.h>

int main(void)
{
	int a[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}}, Num = 4;
	int i = 0, j;
	
	for(j = 3; j >= 0; j--)
	{
		if(Num >= a[0][j])
		{
			for(i = 3; i >= 0; i--)
			{
				if(Num == a[i][j])
				{
					printf("%d, %d\n", i, j);
					break;
				}
			}
		}
	} 
}