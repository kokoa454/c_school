#include <stdio.h>

int main(void) {
	int a, b, c;
	int maxNum, positionNum;

	printf("1�Ԗڂ̐��l����͂��Ă�������:");
	scanf("%d", &a);
	printf("2�Ԗڂ̐��l����͂��Ă�������:");
	scanf("%d", &b);
	printf("3�Ԗڂ̐��l����͂��Ă�������:");
	scanf("%d", &c);

	if (a >= b && a >= c) {
		maxNum = a;
		positionNum = 1;
	}
	else if (b >= a && b >= c) {
		maxNum = b;
		positionNum = 2;
	}
	else {
		maxNum = c;
		positionNum = 3;
	}

	printf("�ő�l��%d�Ԗڂ̐��F%d", positionNum, maxNum);

	return 0;
}