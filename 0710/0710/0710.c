#include <stdio.h>

int main(void) {
	int payment;
	char discount;

	printf("�x�����z����͂��Ă��������F");
	scanf("%d", &payment);
	printf("�������͂���܂����iY/N�j�F");
	rewind(stdin);
	scanf("%c", &discount);

	if (discount == 'Y') {
		printf("�x�����z��%d�~�ł��B\n", payment - 100);
	}
	else {
		printf("�x�����z��%d�~�ł��B\n", payment);
	}
}