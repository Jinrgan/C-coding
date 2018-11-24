#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100] = "hello";
	char s2[] = {'l', 'l', 'o', 'a', 'b', '\0'};
	char s3[100] = "sss";
	
	//strcat(s3, s2);
	
	strcat(s3, strcat(s1, s2));
	puts(s1);
	puts(s2);
	puts(s3);
	
	return 0;
}
