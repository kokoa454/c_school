#include <stdio.h>

void main(void) {
	int data[7];

	for (int i = 0; i < 7; i++) {
		printf("data[%d]: ", i);
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < 7; i++) {
		int isPrime = 0;

		if (data[i] < 2) {
			isPrime = 1;
		}
		else {
			for (int j = 2; j < data[i]; j++) {
				if (data[i] % j == 0) {
					isPrime = 1;
					break;
				}
			}
		}

		if (isPrime) {
			printf("data[%d] = %d‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n", i, data[i]);
		}
		else {
			printf("data[%d] = %d‚Í‘f”‚Å‚·B\n", i, data[i]);
		}
	}
}