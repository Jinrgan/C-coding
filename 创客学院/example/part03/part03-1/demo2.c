#include <stdio.h>

int main()
{
	static char arr[] = "Hello,world!";
	printf("%s\n%15s\n%10.5s\n%2.5s\n%.3s\n", arr, arr, arr, arr, arr);

	return 0;
}
