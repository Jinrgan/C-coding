#include <stdio.h>

int PerTax(int money)
{
	int tax = 0, overmon = 0;
		
	money *= 0.93;
	printf("%d\t", money);
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
		
	printf("%d\t", tax);
	return tax;
	
}

void main()
{
	int money = 0, SumTax = 0;
	
	int i = 0;
	for(i=0; i<30; i++) {
		scanf ("%d", &money);

		SumTax += PerTax(money);
		
		printf("%d\n", SumTax);
	}

}