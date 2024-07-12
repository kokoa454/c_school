#include <stdio.h>

int main(void) {
	int a, b, c;
	int median;

	printf("***** else if 構文③ *****\n");
	printf("数値1：");
	scanf("%d", &a);
	printf("数値2：");
	scanf("%d", &b);
	printf("数値3：");
	scanf("%d", &c);

	if ((b > a && a > c) || (c > a && a > b)) {
		median = a;
	}
	else if ((a > b && b > c) || (c > b && b > a)) {
		median = b;
	}
	else {
		median = c;
	}
	
	printf("中央値は%dです\n", median);

	return 0;
}