#include <stdio.h>

int main(void) {
	int data[10];
	int i, j = 1;

	for (i = 0; i < 10; i++) {
		data[i] = j;
		printf("data[%d] = %d\n", i, data[i]);
		j++;
	}

	return;
}