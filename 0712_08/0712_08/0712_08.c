#include <stdio.h>

int main(void) {
	int num, digit;

	printf("***** 3�������@�����\��*****\n");
	printf("3������\�����Ă��������F");
	scanf("%d", &num);

	if (num < 100 || num > 999) {
		printf("�y���̓~�X�z3���̐�������͂��Ă�������\n");
	}
	else {
		printf("1�`3�̐�������͂��Ă�������");
		scanf("%d", &digit);

		switch (digit) {
		case 1:
			num = num / 100;

			printf("100�̈ʂ�%d�ł�\n", num);
			break;

		case 2:
			num = (num - ((num / 100) * 100)) / 10;

			printf("10�̈ʂ�%d�ł�\n", num);
			break;

		case 3:
			num = num - ((num / 100) * 100);
			num = num - ((num / 10) * 10);

			printf("1�̈ʂ�%d�ł�\n", num);
			break;

		default:
			printf("�y���̓~�X�z1�`3����͂��Ă�������");
		}
	}

	return 0;
}