#include <stdio.h>

int main(void) {
	int num;

	do {
		printf("���l����͂��Ă��������F");
		scanf("%d", &num);

		if(num == 0){
			printf("0�����͂��ꂽ�̂ŏ������I�����܂��B\n");
		}
		else if(num % 2 == 0) {
			printf("%d�͋����ł�\n", num);
		}
		else {
			printf("%d�͊�ł�\n", num);
		}

	} while (num != 0);

	return 0;
}