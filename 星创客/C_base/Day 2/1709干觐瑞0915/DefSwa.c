#include <stdio.h>

// 定义一个宏，实现两个数交换 swap(x, y)

#define swap(x,y) x = x^y; y = x^y; x = x^y

void main()
{
	int m = 10, n = 20;
	swap(m, n);
	printf("%d\t%d\n", m, n);
}