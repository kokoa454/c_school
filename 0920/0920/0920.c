#include <stdio.h>

int changeNum(void);

int x, y;

int main(void) {
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);

	printf("\n\nŒğŠ·‘O: x = %d, y = %d\n", x, y);
	changeNum();
	printf("ŒğŠ·Œã: x = %d, y = %d\n", x, y);
}

int changeNum(void) {
	int w;

	w = x;
	x = y;
	y = w;

	return;
}