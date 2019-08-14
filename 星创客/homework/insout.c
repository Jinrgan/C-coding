#include<stdio.h>

int main(){

	char string[15],c[2];
	
	while(c[0] != 'q' && c[1] != '!'){			//“q”
		printf("Input a string:");
		gets(string);
		c[0] = string[0];
		c[1] = string[1];

		printf("%c,%s\n",c[1],string);
	}
	
	return 0;
	
}
