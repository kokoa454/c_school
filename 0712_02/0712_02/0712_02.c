#include <stdio.h>

int main(void) {
	int x;
	int y;

	printf("***** else if �\�� *****");
	printf("x����͂��Ă��������F");
	scanf("%d", &x);
	printf("y����͂��Ă��������F");
	scanf("%d", &y);

	if (x > y) {
		printf("x��y���傫��");
	}
	else if (x < y) {
		pritnf("x��y��菬����");
	}
	else {
		printf("x��y�Ɠ�����");
	}

	return 0;
}