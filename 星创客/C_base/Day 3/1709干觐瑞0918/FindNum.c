#include <stdio.h>

int * sort(int * pa, int n);

int main()
{
	int a[] = {234, 654, 2, 56, 12, 987}, Num, SortA[sizeof(a)/sizeof(int)] = {};
	int * pa;
	int i;
	
	pa = sort(a, sizeof(a)/sizeof(int));
	
	
	for (i = 0; i < sizeof(a)/sizeof(int); i++) {
		printf("%d\t", *(a+i));
	}
	puts(" ");
	
	scanf("%d", &Num);
	
	for(i = 0; i < sizeof(a)/sizeof(int); i++)
	{
		if(Num < *(pa + i))
		{
			printf("%d\t", *(pa + i));
			break;
		}

	}

	for(i = sizeof(a)/sizeof(int)-1; i >= 0; i--)
	{
		if(*(pa + i) < Num)
		{
			printf("%d\t", *(pa + i));
			break;
		}
	}
	
	puts(" ");
}

int * sort(int * pa, int n)
{
	int t, i, j;
	
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-1-i ; j++) {
			if (*(pa+j) > *(pa+j+1)) {
				t = *(pa+j);
				*(pa+j) = *(pa+j+1);
				*(pa+j+1) = t;
			}
		}
	}

	return pa;
}
