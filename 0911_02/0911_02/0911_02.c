#include <stdio.h>

main() {
	int point;

	while (1) {
		printf("0�`100�̓_������͂��Ă�������: ");
		scanf("%d", &point);

		if (point >= 0 && point <= 100) {
			break;
		}
	}
	
	if (point < 60) {
		printf("�s���i\n");
	}
	else {
		printf("���i\n");
	}
}