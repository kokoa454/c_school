#include <stdio.h>

int main(void) {
	int x;
	int* p;

	p = &x;
	*p = 20;

	printf("x = %d\n", x);
	printf("x = %p\n", p);

	return 0;
}