#include <stdio.h>

int main(void) {
	int num, digit;

	printf("***** 3桁整数　桁数表示*****\n");
	printf("3桁数を表示してください：");
	scanf("%d", &num);

	if (num < 100 || num > 999) {
		printf("【入力ミス】3桁の整数を入力してください\n");
	}
	else {
		printf("1～3の数字を入力してください");
		scanf("%d", &digit);

		switch (digit) {
		case 1:
			num = num / 100;

			printf("100の位は%dです\n", num);
			break;

		case 2:
			num = (num - ((num / 100) * 100)) / 10;

			printf("10の位は%dです\n", num);
			break;

		case 3:
			num = num - ((num / 100) * 100);
			num = num - ((num / 10) * 10);

			printf("1の位は%dです\n", num);
			break;

		default:
			printf("【入力ミス】1～3を入力してください");
		}
	}

	return 0;
}