#include <stdio.h>

#define MAXSIZE 5

void main()
{
	int ch[MAXSIZE] = {};
	int rear = 0, i = 0, buffer = 0;
	
	while(1)
	{
		scanf("%d", &buffer);
		for(i = MAXSIZE - 1; i >= 1; i--)
			ch[i] = ch[i-1];
		ch[0] = buffer;
		
		if(rear < 4)
			rear++;
			
		for(i=0; i <= rear; i++)
			printf("%d\t", ch[i]);
		
		printf("\n");
	}
	
	
}