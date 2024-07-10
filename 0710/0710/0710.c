#include <stdio.h>

int main(void) {
	int payment;
	char discount;

	printf("支払金額を入力してください：");
	scanf("%d", &payment);
	printf("割引券はありますか（Y/N）：");
	rewind(stdin);
	scanf("%c", &discount);

	if (discount == 'Y') {
		printf("支払金額は%d円です。\n", payment - 100);
	}
	else {
		printf("支払金額は%d円です。\n", payment);
	}
}