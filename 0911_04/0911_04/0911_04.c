#include <stdio.h>

main() {
	int sum = 0;
	int num, i;

	for (i = 0; i < 10; i++) {
		printf("数値を入力してください: ");
		scanf("%d", &num);

		if (num < 10) {
			continue;
		}

		sum += num;
	}

	printf("合計は%dです。", sum);
}