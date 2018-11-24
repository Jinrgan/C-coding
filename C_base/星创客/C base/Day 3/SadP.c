#include <stdio.h>

char isMax(int NumLine, int NumCol, int m, int (*data)[m]);
char IsMin(int NumLine, int NumCol, int n, int m, int (*data)[m]);

void main()
{
	int a[3][4] = {{5,7,4,6}, {4,8,6,7}, {5,9,7,7}};

	int j, i=0;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			//printf("%d, %d\t", a[i][j], isMax(i, j, 4, a));
			//printf("%d, %d\t", a[i][j], IsMin(i, j, 3, 4, a));
			if(isMax(i, j, 4, a) && IsMin(i, j, 3, 4, a))
				printf("a[%d][%d] = %d\t", i, j , a[i][j]);
			
		}
		puts(" ");

	}
	
	puts(" ");
}

char isMax(int NumLine, int NumCol, int m, int (*data)[m])
{
	int Num = *(*(data + NumLine) + NumCol), j;
	
	for(j=0; j<m; j++)
	{
		if(Num < *(*(data + NumLine) + j))
		{
			return 0;
		}
	}
	return 1;
}


char IsMin(int NumLine, int NumCol, int n, int m, int (*data)[m])
{
	int Num = *(*(data + NumLine) + NumCol), i;
	
	for(i=0; i<n; i++)
	{
		if(Num > *(*(data + i) + NumCol))
		{
			return 0;
		}
	}
	return 1;
}