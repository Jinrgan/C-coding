#include <stdio.h>

// 定义一个整型数组，有五个元素，从键盘输入数据，保留最大的五个数字. 

#define MAXSIZE 5

void main()
{
	int ch[MAXSIZE] = {};
	int rear = 0, i = 0, buffer = 0;
	int min = 0, MinPos = 0;
	
	while(1)
	{
		min = ch[0];
		
		for(i=0; i < MAXSIZE; i++)
		{
			if(min >= ch[i])
			{
				min = ch[i];
				MinPos = i;
			}
		}
		
		printf("%d\n", MinPos);
		
		scanf("%d", &buffer);
		// 数组依此左移，覆盖掉最右
		if(buffer > min)
		{
			for(i = MinPos; i >= 1; i--)
				ch[i] = ch[i-1];
			ch[0] = buffer;
		}

		for(i=0; i < MAXSIZE; i++)
			printf("%d,%d\t", ch[i], i);
		
		printf("\n");
	}
	
}