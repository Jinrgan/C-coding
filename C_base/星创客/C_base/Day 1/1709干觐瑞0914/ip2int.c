#include <stdio.h>

void main()
{
	char ip[] = "192.168.1.134", c;
	int num[4] = {0};
	
	//sscanf(ip,"%d%1s%d%1s%d%1s%d", &num[0], &c, &num[1], &c, &num[2], &c, &num[3]);
	sscanf(ip,"%d%c%d%c%d%c%d", &num[0], &c, &num[1], &c, &num[2], &c, &num[3]);

	
	int i;
	unsigned int sum=0;
	for(i=0; i<4; i++) {
		printf("%d\t", num[i]);
		sum = num[i] + sum*256;
		printf("%u\n", sum);

	}

}