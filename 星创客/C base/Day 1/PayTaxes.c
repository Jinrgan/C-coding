#include <stdio.h>

void main()
{
	int money = 0, tax = 0;
	
	scanf ("%d", &money);
	
	money *= 0.93;
	printf("%d\t%d\n", money, money - 3500);
	overmon = money - 3500;
	
	if((overmon > 0) && (overmon <= 1500))
		tax = overmon * 0.03;
	else if(overmon <= 4500)
		tax = 1500 * 0.03 + (overmon - 1500) * 0.01;
	else if(overmon <= 9000)
		tax = 1500 * 0.03 + (4000 - 1500) * 0.01 + overmon * 0.20;
	else if((money - 3500 > 9000) && (money - 3500 <= 35000))
		tax = (money-3500) * 0.25;
	else if((money - 3500 > 35000) && (money - 3500 <= 55000))
		tax = (money-3500) * 0.30;
	else if((money - 3500 > 55000) && (money - 3500 <= 80000))
		tax = (money-3500) * 0.35;
	else if((money - 3500 > 80000))
		tax = (money-3500) * 0.45;
		
	printf("%d\n", tax);
}