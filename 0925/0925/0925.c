#include <stdio.h>

int fact(int n);

int main(void) {
	int x;
	printf("x: ");
	scanf("%d", &x);

	printf("%d�̊K���%d�ł��B\n", x, fact(x));
}

int fact(int n) {
	if (n > 1) {
		return n * fact(n - 1);
	}
	else {
		return 1;
	}
}