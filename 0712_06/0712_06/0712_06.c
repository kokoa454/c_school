#include <stdio.h>

int main(void) {
	int num;

	printf("何月ですか？");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("1月は31日あります\n");
		break;

	case 2:
		printf("2月は28日あります\n");
		break;

	case 3:
		printf("3月は31日あります\n");
		break;

	case 4:
		printf("4月は30日あります\n");
		break;

	case 5:
		printf("5月は31日あります\n");
		break;

	case 6:
		printf("6月は30日あります\n");
		break;

	case 7:
		printf("7月は31日あります\n");
		break;

	case 8:
		printf("8月は31日あります\n");
		break;

	case 9:
		printf("9月は30日あります\n");
		break;

	case 10:
		printf("10月は31日あります\n");
		break;

	case 11:
		printf("11月は30日あります\n");
		break;

	case 12:
		printf("12月は31日あります\n");
		break;

	default:
		printf("入力が間違っています\n");

	}

	return 0;
}