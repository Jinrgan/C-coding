#include <stdio.h>
int main()
{
	int a[3][4] = {{1, 9, 34, 5},
				   {32, 1,9, 41},
				   {2, 5, 89, 6}};
	int i, j, max = a[0][0], m = 0, n= 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				m = i;
				n = j;
			}
		}
	} 

	printf("%d %d %d %d\n", m, n, max, a[m][n]);

	return 0;
}
