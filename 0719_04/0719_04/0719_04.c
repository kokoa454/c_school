#include <stdio.h>

int main(void) {
	int num;
	
	do {
		printf("0����͂���܂ŌJ�Ԃ����x�����͂��܂��B\n");
		scanf("%d", &num);
	} while (num != 0);

	printf("0�����͂��ꂽ�̂ŏ������I�����܂��B\n");

	return 0;
}