#include  <stdio.h>

int main(void) {
	int num1, num2;
	int calNum;

	printf("1つ目の数を入力してください：");
	scanf("%d", &num1);
	printf("2つ目の数を入力してください：");
	scanf("%d", &num2);
	printf("1〜4を入力してください：");
	scanf("%d", &calNum);

	switch (calNum) {
	case 1:
		printf("%d+%d=%dです\n", num1, num2, num1 + num2);
		break;

	case 2:
		if (num1 >= num2) {
			printf("%d-%d=%dです\n", num1, num2, num1 - num2);
		}
		else {
			printf("%d-%d=%dです\n", num2, num1, num2 - num1);
		}

		break;

	case 3:
		printf("%d*%d=%dです\n", num1, num2, num1 * num2);
		break;

	case 4:
		if (num1 >= num2) {
			printf("%d÷%d=%dです\n", num1, num2, num1 / num2);
		}
		else {
			printf("%d÷%d=%dです\n", num2, num1, num2 / num1);
		}

		break;

	default:
		printf("【入力ミス】1〜4を入力してください\n");
	}

	return 0;
}