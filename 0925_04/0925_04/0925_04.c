#include <stdio.h>

void main(void) {
	int data[10];

	for (int i = 0; i < 10; i++) {
		printf("���l�����: ");
		scanf("%d", &data[i]);
	}

	for (int j = 9; j >= 0; j--) {
		printf("data[%d] = %d\n", j, data[j]);
	}
}