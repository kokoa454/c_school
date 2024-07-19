#include <stdio.h>

int main(void) {
	int num;
	num = 2;

	while (num < 10000) {
		printf("%d ", num);
		num = num * 2;
	}

	printf("\n");

	return 0;
}