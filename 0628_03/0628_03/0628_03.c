#include <stdio.h>

int main() {
	int a = 2, b = 3, c = 4, d = 5;
	int work;

	work = a;
	a = c;
	c = d;
	d = b;
	b = work;

	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);

	return 0;
}