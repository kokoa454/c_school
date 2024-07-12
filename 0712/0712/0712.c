#include <stdio.h>

int main(void) {
	int p1, p2;

	printf("中間テストの点数：");
	scanf("%d", &p1);
	printf("期末テストの点数：");
	scanf("%d", &p2);

	if (p1 >= 80 && p2 >= 80) {
		printf("成績は「優」です\n");
	}
	else if (p1 + p2 >= 140) {
		printf("成績は「良」です\n");
	}
	else if (p1 + p2 >= 100 && (p1 >= 90 || p2 >= 90)) {
		printf("成績は「可」です\n");
	}
	else {
		printf("成績は「不可」です\n");
	}

	return 0;
}