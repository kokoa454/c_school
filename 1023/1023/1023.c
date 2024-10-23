#include <stdio.h>

void swap(int* p1, int* p2) {
	int t = *p1;
	*p1 = *p2;
	*p2 = t;
}

void main() {
	int value[5];
	int i, j;

	for (i = 0; i < 5; i++) {
		printf("”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
		scanf("%d", &value[i]);
	}

	for (i = 0; i < 5; i++) {
		for (j = (i + 1); j < 5; j++) {
			if (value[i] > value[j]) {
				swap(&value[i], &value[j]);
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d", value[i]);
	}
}