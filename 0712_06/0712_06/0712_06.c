#include <stdio.h>

int main(void) {
	int num;

	printf("�����ł����H");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("1����31������܂�\n");
		break;

	case 2:
		printf("2����28������܂�\n");
		break;

	case 3:
		printf("3����31������܂�\n");
		break;

	case 4:
		printf("4����30������܂�\n");
		break;

	case 5:
		printf("5����31������܂�\n");
		break;

	case 6:
		printf("6����30������܂�\n");
		break;

	case 7:
		printf("7����31������܂�\n");
		break;

	case 8:
		printf("8����31������܂�\n");
		break;

	case 9:
		printf("9����30������܂�\n");
		break;

	case 10:
		printf("10����31������܂�\n");
		break;

	case 11:
		printf("11����30������܂�\n");
		break;

	case 12:
		printf("12����31������܂�\n");
		break;

	default:
		printf("���͂��Ԉ���Ă��܂�\n");

	}

	return 0;
}