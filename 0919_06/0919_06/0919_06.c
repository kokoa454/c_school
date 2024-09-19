#include <stdio.h>

int maxValue(int, int);
int minValue(int, int);

int maxValue(int n1, int n2) {
	if (n1 >= n2) {
		return n1;
	}
	else {
		return n2;
	}
}

int minValue(int n1, int n2) {
	if (n1 <= n2) {
		return n1;
	}
	else {
		return n2;
	}
}

int main(void) {
	int x, y, z;

	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	printf("z: ");
	scanf("%d", &z);

	printf("\n");
	printf("Å‘å’l: %d\n", maxValue(x, maxValue(y, z)));
	printf("Å¬’l: %d\n", minValue(x, minValue(y, z)));
}