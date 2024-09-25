#include <stdio.h>
int gcm(int x, int y);

int main(void) {
	int x, y;

	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);

	printf("Å‘åŒö–ñ”‚Í%d‚Å‚·B\n", gcm(x, y));
}

int gcm(int x, int y) {
	if (x % y != 0) {
		return gcm(y, x % y);
	}
	else {
		return y;
	}
}