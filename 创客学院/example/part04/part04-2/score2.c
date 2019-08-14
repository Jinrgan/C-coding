#include <stdio.h>

int main()
{
	float score = 0;

	printf("input a score:");
	scanf("%f", &score);

	if (score < 0 || score > 100) {
		printf("input error!\n");
		return 0;
	}

	//switch ((int)score) {
	switch ((int)score / 10) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
	case 7:
		printf("B\n");
		break;
	case 6:
		printf("C\n");
		break;
	default:
		printf("D\n");
	}

	return 0;
}
