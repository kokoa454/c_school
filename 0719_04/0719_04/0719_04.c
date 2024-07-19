#include <stdio.h>

int main(void) {
	int num;
	
	do {
		printf("0を入力するまで繰返し何度も入力します。\n");
		scanf("%d", &num);
	} while (num != 0);

	printf("0が入力されたので処理を終了します。\n");

	return 0;
}