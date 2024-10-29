#include <stdio.h>

int sum(int*, int);

int main(void) {
	int ten[10] = { 60, 45, 82, 49, 91, 52, 77, 39, 100, 73 };
	int h_num = 10;

	printf("—v‘f‚Ì‡Œv‚Í%d‚Å‚·\n", sum(ten, h_num));

	return 0;
}

int sum(int* ten_pt, int el_num) {
	int i, sum = 0;

	for (i = 0; i < el_num; i++) {
		sum += ten_pt[i];
	}

	return sum;
}