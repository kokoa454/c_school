#include <stdio.h>

int main(void) {
	int a, b, c;
	int median;

	printf("***** else if �\���B *****\n");
	printf("���l1�F");
	scanf("%d", &a);
	printf("���l2�F");
	scanf("%d", &b);
	printf("���l3�F");
	scanf("%d", &c);

	if ((b > a && a > c) || (c > a && a > b)) {
		median = a;
	}
	else if ((a > b && b > c) || (c > b && b > a)) {
		median = b;
	}
	else {
		median = c;
	}
	
	printf("�����l��%d�ł�\n", median);

	return 0;
}