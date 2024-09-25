#include <stdio.h>

int main(void) {
	int binary[16];
	int value, i;

	printf("x: ");
	scanf("%d", &value);

	for (i = 0; i < 16; i++) {
		binary[i] = value % 2;
		value = value / 2;
	}

	for (i = 15; i >= 0; i--) {
		printf("%d", binary[i]);
	}
}