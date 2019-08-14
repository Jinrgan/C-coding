#include <stdio.h>

void main( )
{
	int sum = 0, i = 0;
	for(i = 0; i <= 10; i++){
		sum += i;
	}
    
	printf("sum = %d\n", sum);
    printf("error: %s, %d, %s\n", __FILE__, __LINE__, __FUNCTION__);
}

