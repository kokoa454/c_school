#include <stdio.h>

int main() {
	int x = 3;
	int y = 7;
	int work;

	work = x;
	x = y;
	y = work;

	printf("x = %d, y = %d", x, y);

	return 0;
}