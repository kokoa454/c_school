#include <stdio.h>

int main(void) {
	int fortune;

	printf("Enter a number: ");
	scanf("%d", &fortune);

	switch (fortune) {
	case 1:
		printf("‘å‹g\n");
		break;
	case 2:
		printf("’†‹g\n");
		break;
	case 3:
		printf("‹g\n");
		break;
	default:
		printf("‹¥");
	}

	return 0;
}