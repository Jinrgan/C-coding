#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compareLargeToSmall(int a, int b);
int compareSmallToLarge(int a, int b);
void sort(int * arr, int N, int (*pFunc)(int, int));

int main(int argc, const char * argv[])
{
	printf("argc=%d\r\n", argc);
	int i = 0;
	for(i=0; i<argc; i++)
	{
		printf("%d: %s\r\n", i, argv[i]);
	}
	
	int a[] = {23, 34, 14, 38, 46, 16, 68, 15, 07, 31, 26};
	int N = 11;
	
	if(atoi(argv[1]))
		sort(a, N, compareLargeToSmall(int, int));
	else
		sort(a, N, compareSmallToLarge(int, int));
		
	for(i=0; i<N; i++)
		printf("%d: %d\t", i, a[i]);
	puts(" ");
}

int compareLargeToSmall(int a, int b)
{
	return a < b ? 1 : 0;
}

int compareSmallToLarge(int a, int b)
{
	return a > b ? 1 : 0;
}

void sort(int * arr, int N, int (*pFunc)(int, int))
{
	if (NULL == arr || NULL == pFunc || N <= 0)
	{
		return ;
	}
	int i = 0;
	int j = 0;
	bool flag = true;
	for (j = 0; j < N - 1; j++)
	{
		flag = false;
		for (i = 0; i < N - 1 - j; i++)
		{		
			if (pFunc(arr[i] , arr[i + 1]))		
			{
				swap(&arr[i], &arr[i + 1]);
				flag = true;
			}
		}
		if (false == flag)
			break;
	}
}