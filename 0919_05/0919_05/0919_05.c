#include <stdio.h>

int max(int x, int y, int z);
int min(int x, int y, int z);

int main(void) {
	int a, b, c, maxNum, minNum;

	printf("x: ");
	scanf("%d", &a);
	printf("y: ");
	scanf("%d", &b);
	printf("z: ");
	scanf("%d", &c);

	maxNum = max(a, b, c);
	minNum = min(a, b, c);

	printf("最大値: %d\n", maxNum);
	printf("最小値: %d\n", minNum);
}

int max(int x, int y, int z) {
	if (x >= y && x >= z) {
		return x;
	}
	else if (y > x && y > z) {
		return y;
	}
	else {
		return z;
	}
}

int min(int x, int y, int z) {
	if (x <= y && x <= z) {
		return x;
	}
	else if (y < x && y < z) {
		return y;
	}
	else {
		return z;
	}
}