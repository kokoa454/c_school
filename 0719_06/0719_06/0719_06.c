#include <stdio.h>

void checkNum(int num);

void checkNum(int num) {
	if (num == 0) {
		printf("0�����͂��ꂽ�̂ŏ������I�����܂��B\n");
	}
	else if (num % 2 == 0) {
		printf("%d�͋����ł�\n", num);
	}
	else {
		printf("%d�͊�ł�\n", num);
	}
}

int main(void) {
	int num;

	printf("���l����͂��Ă��������F");
	scanf("%d", &num);
	checkNum(num);

	while (num != 0) {
		printf("���l����͂��Ă��������F");
		scanf("%d", &num);
		checkNum(num);
	}

	return 0;
}