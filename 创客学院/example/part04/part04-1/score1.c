#include <stdio.h>

int main()
{
	int score = 0;

	printf("input score:");
	scanf("%d", &score);

	if (score < 0 || score > 100) {
		printf("input error\n");
		return 0;
	}

	if (score >= 90) {
		printf("[90,100] A\n");
	}
	else if (score > 80) {//[80, 90)
		printf("[80,90) B\n");
	}
	else if (score > 70) {//[70, 80)
		printf("[70,80) C\n");
	}
	else if (score > 60) {
		printf("[60,70) D\n");
	}
	else {
		printf("[0,60) E\n");
	}

	return 0;
}
