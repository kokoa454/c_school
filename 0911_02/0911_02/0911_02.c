#include <stdio.h>

main() {
	int point;

	while (1) {
		printf("0〜100の点数を入力してください: ");
		scanf("%d", &point);

		/* 
		if (point >= 0 && point <= 100) {
			break;
		}
		*/

		if (point < 0 || point > 100) {
			continue;
		}
		else {
			break;
		}
	}
	
	if (point < 60) {
		printf("不合格\n");
	}
	else {
		printf("合格\n");
	}
}