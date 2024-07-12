#include <stdio.h>

int main(void) {
	int fortune;

	printf("Enter a number: ");
	scanf("%d", &fortune);

	switch (fortune) {
	case 1:
		printf("大吉\n");
		break;
	case 2:
		printf("中吉\n");
		break;
	case 3:
		printf("吉\n");
		break;
	default:
		printf("凶");
	}

	return 0;
}