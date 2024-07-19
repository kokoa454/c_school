#include <stdio.h>

int main(void) {
	int num;

	do {
		printf("数値を入力してください：");
		scanf("%d", &num);

		if(num == 0){
			printf("0が入力されたので処理を終了します。\n");
		}
		else if(num % 2 == 0) {
			printf("%dは偶数です\n", num);
		}
		else {
			printf("%dは奇数です\n", num);
		}

	} while (num != 0);

	return 0;
}