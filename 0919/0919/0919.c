#include <stdio.h>
int kasan(int x, int y);
double jozan(int x, int y);

int main(void) {
	int a = 10, b = 3, wa;
	double shou;

	wa = kasan(a, b);
	shou = jozan(a, b);

	printf("%dと%dの和は%d, 商は%.1fです。", a, b, wa, shou);
}

int kasan(int x, int y) {
	int z;

	z = x + y;
	return z;
}

double jozan(int x, int y) {
	int z;

	z = x / y;
	return z;
}