#include <stdio.h>

int searchNumFromArray(int arr[][4], int num);
int searchNumFromArray2(const int * pArr, int cols, int rows, int num);
 
int main()
{
	int arr[4][4] = {.......};
	int ret = searchNumFromArray(arr, 7);
	int iArr[] = {....};
	int iRet = searchNumFromArray2(iArr, 4, 4, 7);
	if (TRUE == ret)
		printf("get it \r\n");
	else 
		printf("there is no such num\r\n");
	return 0;
}

int searchNumFromArray2(const int * pArr, int cols, int rows, int num)
{
	if (NULL == pArr || cols <= 0 || rows <= 0)
		return FALSE;
	int row = 0;
	int col = cols - 1;
	
	while(row < rows && col >= 0)
	{
		if (num > pArr[row * cols + col])
			row++;
		else if(num < pArr[row * cols + col])
			col--;
		else 
			return TRUE;
	}
	
	return FALSE
}

int searchNumFromArray(int arr[][4], int num)
{
	int col = 4 - 1;
	int row = 0;
	while(col >= 0 && row < 4)
	{
		if (num == arr[row][col])
			return TRUE;
		else if (num > arr[row][col])
			row++;
		else 
			col--;
	}
	return FALSE;
}