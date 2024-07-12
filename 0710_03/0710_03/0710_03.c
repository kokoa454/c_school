#include <stdio.h>

int main(void) {
	int a, b, c;
	int maxNum, positionNum;

	printf("1番目の数値を入力してください:");
	scanf("%d", &a);
	printf("2番目の数値を入力してください:");
	scanf("%d", &b);
	printf("3番目の数値を入力してください:");
	scanf("%d", &c);

	if (a >= b && a >= c) {
		maxNum = a;
		positionNum = 1;
	}
	else if (b >= a && b >= c) {
		maxNum = b;
		positionNum = 2;
	}
	else {
		maxNum = c;
		positionNum = 3;
	}

	printf("最大値は%d番目の数：%d", positionNum, maxNum);

	return 0;
}