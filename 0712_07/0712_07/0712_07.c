#include  <stdio.h>

int main(void) {
	int num1, num2;
	int calNum;

	printf("1�ڂ̐�����͂��Ă��������F");
	scanf("%d", &num1);
	printf("2�ڂ̐�����͂��Ă��������F");
	scanf("%d", &num2);
	printf("1�`4����͂��Ă��������F");
	scanf("%d", &calNum);

	switch (calNum) {
	case 1:
		printf("%d+%d=%d�ł�\n", num1, num2, num1 + num2);
		break;

	case 2:
		if (num1 >= num2) {
			printf("%d-%d=%d�ł�\n", num1, num2, num1 - num2);
		}
		else {
			printf("%d-%d=%d�ł�\n", num2, num1, num2 - num1);
		}

		break;

	case 3:
		printf("%d*%d=%d�ł�\n", num1, num2, num1 * num2);
		break;

	case 4:
		if (num1 >= num2) {
			printf("%d��%d=%d�ł�\n", num1, num2, num1 / num2);
		}
		else {
			printf("%d��%d=%d�ł�\n", num2, num1, num2 / num1);
		}

		break;

	default:
		printf("�y���̓~�X�z1�`4����͂��Ă�������\n");
	}

	return 0;
}