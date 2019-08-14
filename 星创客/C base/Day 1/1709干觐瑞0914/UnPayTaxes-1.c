#include <stdio.h>

#define gainmon 8000

#define M1 1500 * 0.97 
#define M2 (4500 - 1500) * 0.90
#define M3 (9000 - 4500) * 0.80
#define M4 (35000 - 9000) * 0.75
#define M5 (55000 - 35000) * 0.70
#define M6 (80000 - 55000) * 0.65

#define T1 1500 * 0.03 //
#define T2 (4500 - 1500) * 0.10
#define T3 (9000 - 4500) * 0.20
#define T4 (35000 - 9000) * 0.25
#define T5 (55000 - 35000) * 0.30
#define T6 (80000 - 55000) * 0.35

void main()
{
	int money = 0, OverGainMon = 0;
	OverGainMon = gainmon - 3500;
	
	if(OverGainMon < 0)
		money = gainmon/0.93;
	else if(OverGainMon + T1 < 1500) 
		money = (OverGainMon/0.97 + 3500)/0.93;
	else if((OverGainMon + T1 + T2) < 4500) 
		money = ((OverGainMon + T1 - 1500)/0.90 + 1500 + 3500)/0.93;
	else if((OverGainMon + T1 + T2 + T3) < 9000) 
		money = ((OverGainMon + T1 + T2 - 4500)/0.80 + 4500 + 3500)/0.93;
	else if((OverGainMon + T1 + T2 + T3 + T4 ) < 35000) 
		money = ((OverGainMon + T1 + T2 + T3 - 9000)/0.75 + 9000 + 3500)/0.93;
	else if((OverGainMon + T1 + T2 + T3 + T4 + T5) < 55000) 
		money = ((OverGainMon + T1 + T2 + T3 + T4 - 35000)/0.70 + 35000 + 3500)/0.93;
	else if((OverGainMon + T1 + T2 + T3 + T4 + T5 + T6) < 80000) 
		money = ((OverGainMon + T1 + T2 + T3 + T4 + T5 - 55000)/0.65 + 55000 + 3500)/0.93;
	else 
		money = ((OverGainMon + T1 + T2 + T3 + T4 + T5 + T6 - 80000)/0.45 + 80000 + 3500)/0.93;

	printf("%d\n", money);

}