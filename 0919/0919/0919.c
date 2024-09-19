#include <stdio.h>
int kasan(int x, int y);
double jozan(int x, int y);

int main(void) {
	int a = 10, b = 3, wa;
	double shou;

	wa = kasan(a, b);
	shou = jozan(a, b);

	printf("%d‚Æ%d‚Ì˜a‚Í%d, ¤‚Í%.1f‚Å‚·B", a, b, wa, shou);
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