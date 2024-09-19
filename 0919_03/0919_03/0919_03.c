#include <stdio.h>

int tri(int x, int y);

int main(void) {
	int side, high, area;

	printf("’ê•Ó: ");
	scanf("%d", &side);
	printf("‚‚³: ");
	scanf("%d", &high);
	area = tri(side, high);

	printf("–ÊÏ = %d\n", area);

	return 0;
}

int tri(int x, int y) {
	return (x * y) / 2;
}