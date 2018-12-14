#include<stdio.h>

#define WAT_D_MASS 3.0e-23
#define QUART_MASS 950
void main()
{
    float n = 0;
    
    printf("Pls input the quart of water: ");
    scanf("%f", &n);
    
    printf("The num of water: %e\n", n * QUART_MASS / WAT_D_MASS);
}
