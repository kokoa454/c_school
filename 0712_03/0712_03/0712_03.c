#include <stdio.h>

int main(void) {
	int a, b, c;
	int maxNum, minNum;

	printf("***** else if 構文② *****\n");
	printf("数値1：");
	scanf("%d", &a);
	printf("数値2：");
	scanf("%d", &b);
	printf("数値3：");
	scanf("%d", &c);

	if (a > b && a > c) {
		maxNum = a;
		if (b > c) {
			minNum = c;
		}
		else {
			minNum = b;
		}
	}
	else if (b > a && b > c) {
		maxNum = b;
		if (a > c) {
			minNum = c;
		}
		else {
			minNum = a;
		}
	}
	else {
		maxNum = c;
		if (a > b) {
			minNum = b;
		}
		else {
			minNum = a;
		}
	}

	printf("最大値は%d\n", maxNum);
	printf("最小値は%d\n", minNum);

	return 0;
}