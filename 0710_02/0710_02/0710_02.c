#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("Enter a number a:");
	scanf("%d", &a);
	printf("Enter a number b:");
	rewind(stdin);
	scanf("%d", &b);

	if (a >= b) {
		c = a * b;
		printf("%d * %d = %d", a, b, c);
	}
	else if (a < b) {
		c = b / a;
		printf("%d / %d = %d", b, a, c);
	}

	return 0;
}