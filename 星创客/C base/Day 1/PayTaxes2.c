#include <stdio.h>

void main()
{
	int money = 0, tax = 0, overmon = 0;
	
	scanf ("%d", &money);
	
	money *= 0.93;
	printf("%d\t%d\n", money, money - 3500);
	overmon = money - 3500;
	
	if(overmon < 0)
		tax = 0;
	else if(overmon <= 1500)
		tax = overmon * 0.03;
	else if(overmon <= 4500)
		tax = 1500 * 0.03 + (overmon - 1500) * 0.10;
	else if(overmon <= 9000)
		tax = 1500 * 0.03 + (4500 - 1500) * 0.10 + (overmon - 4500) * 0.20;
	else if(overmon <= 35000)
		tax = 1500 * 0.03 + (4500 - 1500) * 0.10 + (9000 - 4500) * 0.20 + (overmon - 9000) * 0.25;
	else if(overmon <= 55000)
		tax = 1500 * 0.03 + (4500 - 1500) * 0.10 + (9000 - 4500) * 0.20 + (35000 - 9000) * 0.25 + (overmon - 35000) * 0.30;
	else if(overmon <= 80000)
		tax = 1500 * 0.03 + (4500 - 1500) * 0.10 + (9000 - 4500) * 0.20 + (35000 - 9000) * 0.25 + (55000 - 35000) * 0.30 + (overmon - 55000) * 0.35;
	else if(overmon > 80000)
		tax = 1500 * 0.03 + (4500 - 1500) * 0.10 + (9000 - 4500) * 0.20 + (35000 - 9000) * 0.25 + (55000 - 35000) * 0.30 + (80000 - 55000) * 0.35 + (overmon - 80000) * 0.45;
		
	printf("%d\n", tax);
}