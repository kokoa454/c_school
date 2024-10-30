#include <stdio.h>

void arrayMinMax(int*, int, int*, int*);

int main(void) {
	int data[10] = { 4, 2, 5, 9, 2, 1, 4, 5, 4, 5 };
	int min, max;

	arrayMinMax(data, sizeof(data) / sizeof(data[0]), &min, &max);

	printf("min = %d, max = %d\n", min, max);

	return 0;
}

void arrayMinMax(int* data_pt, int n, int* minPtr, int* maxPtr) {
	*minPtr = data_pt[0];
	*maxPtr = data_pt[0];
	
	for (int i = 1; i < n; i++) {
		if (*minPtr > data_pt[i]) {
			*minPtr = data_pt[i];
		}
	}

	for (int i = 1; i < n; i++) {
		if (*maxPtr < data_pt[i]) {
			*maxPtr = data_pt[i];
		}
	}

	return;
}