#include <stdio.h>
#include <string.h>

//1:char s[20];
char * get_string();

int main() 
{
	printf("%s\n", get_string());

	return 0;
}

char * get_string() {
//2:	static char s[20];

//	strcpy(s, "hello");
	char * s = "hello";//4
//4: malloc

	return s;
}
