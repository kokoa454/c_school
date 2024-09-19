#include <stdio.h>

int jijou(int x);

int souwa = 0;

int main(void) {
	int a = 2, b = 5, wa, i;
	
	wa = 0;
	for (i = 0; i < 2; i++) {
		wa += jijou(a + i);
	}
	printf("wa (1‰ñ–Ú): %d\n", wa);

	wa = 0;
	for (i = 3; i >= 1; i--) {
		wa += jijou(b - i);
	}
	printf("wa (2‰ñ–Ú): %d\n", wa);
	
	printf("souwa: %d\n", souwa);
}

int jijou(int a) {
	int wa;
	wa = a * a;
	souwa += wa;

	return wa;
}