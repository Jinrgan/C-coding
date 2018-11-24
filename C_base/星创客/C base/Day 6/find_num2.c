#include <stdio.h>
#include <stdlib.h>

int find_num2(const int * pArr, int cols, int rows, int num);

int main(int argc, const char * argv[])
{
	printf("argc=%d\r\n", argc);
	int i = 0;
	for(i=0; i<argc; i++)
	{
		printf("%d: %s\r\n", i, argv[i]);
	}
	
	int a[] = {18, 10, 9, 8, 16, 20, 38, 42, 19, 50, 84, 72, 56, 55, 76, 100, 90, 88, 108};
	int * pa = a;
	
	printf("end = %d\n", find_num2(a, 4, 5, atoi(argv[1])));

	return 0;
}


int find_num2(const int * pArr, int cols, int rows, int num)
{
	if(NULL == pArr || cols <= 0 || rows <= 0)
		return 0;
	
	int col = 0, row = 0;
	int indext[][4] = {{18, 50, 84, 108}, {0, 5, 10, 15}};

	while(col < cols && row < rows)
	{
		if(num > indext[0][col])
			col++;
		else if(num != pArr[indext[1][col]+row])
			row++;
		else return 1;
	}
	
	return 0;
}