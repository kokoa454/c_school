#include <stdio.h>

int main(void) {
	int a, b, c;
	int maxNum, minNum;

	printf("***** else if �\���A *****\n");
	printf("���l1�F");
	scanf("%d", &a);
	printf("���l2�F");
	scanf("%d", &b);
	printf("���l3�F");
	scanf("%d", &c);

	if (a > b && a > c) {
		maxNum = a;
		if (b > c) {
			minNum = c;
		}
		else {
			minNum = b;
		}
	}
	else if (b > a && b > c) {
		maxNum = b;
		if (a > c) {
			minNum = c;
		}
		else {
			minNum = a;
		}
	}
	else {
		maxNum = c;
		if (a > b) {
			minNum = b;
		}
		else {
			minNum = a;
		}
	}

	printf("�ő�l��%d\n", maxNum);
	printf("�ŏ��l��%d\n", minNum);

	return 0;
}