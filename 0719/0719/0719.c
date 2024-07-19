#include <stdio.h>

int main(void) {
	int num;
	int inputNum;

	num = 0;
	
	printf("数値を入力してください：");
	scanf("%d", &inputNum);

	num = num + inputNum;

	while (num <= 100) {
		printf("数値を入力してください：");
		scanf("%d", &inputNum);

		num = num + inputNum;
	}

	printf("合計は%d\n", num);

	return 0;
}