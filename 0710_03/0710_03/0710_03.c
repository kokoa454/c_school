#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("1番目の数値を入力してください:");
	scanf("%d", &a);
	printf("2番目の数値を入力してください:");
	rewind(stdin);
	scanf("%d", &b);
	printf("3番目の数値を入力してください:");
	rewind(stdin);
	scanf("%d", &c);

	if (a > b) {
		if (a > c) {
			printf("最大値は1番目の%dです。\n", a);
		}
		else {
			printf("最大値は3番目の%dです。\n", c);
		}
	}
	else if (b > c) {
		printf("最大値は2番目の%dです。\n", b);
	}
	else
	{
		printf("最大値は3番目の%dです。\n", c);
	}

	return 0;
}