#include <stdio.h>

main() {
	int score, flag = 1;

	printf("�_��: ");

	while (flag) {
		scanf("%d", &score);

		if (score >= 0 && score <= 100) {
			flag = 0;
		}
		else {
			printf("0�`100�̓_������͂��Ă�������: ");
		}
	}

	if (score >= 0 && score < 60) {
		printf("�s���i\n");
	}
	else {
		printf("���i\n");
	}
}
