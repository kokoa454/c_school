#include <stdio.h>

int main(void) {
	int data[9][9];
	int leftZero = 0;
	int rightZero = 8;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (leftZero == j) {
				data[i][leftZero] = 1;
			}
			else if (rightZero == j) {
				data[i][rightZero] = 1;
			}
			else {
				data[i][j] = 0;
			}
		}
		leftZero += 1;
		rightZero -= 1;
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%2d", data[i][j]);
		}
		printf("\n");
	}

	return 0;
}