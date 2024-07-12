#include <stdio.h>

int main(void) {
	int x;
	int y;

	printf("***** else if 構文 *****");
	printf("xを入力してください：");
	scanf("%d", &x);
	printf("yを入力してください：");
	scanf("%d", &y);

	if (x > y) {
		printf("xはyより大きい");
	}
	else if (x < y) {
		pritnf("xはyより小さい");
	}
	else {
		printf("xはyと等しい");
	}

	return 0;
}