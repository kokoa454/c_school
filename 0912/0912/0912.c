#include <stdio.h>

main() {
	int score, flag = 1;

	printf("点数: ");

	while (flag) {
		scanf("%d", &score);

		if (score >= 0 && score <= 100) {
			flag = 0;
		}
		else {
			printf("0〜100の点数を入力してください: ");
		}
	}

	if (score >= 0 && score < 60) {
		printf("不合格\n");
	}
	else {
		printf("合格\n");
	}
}
