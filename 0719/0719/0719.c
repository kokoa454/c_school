#include <stdio.h>

int main(void) {
	int num;
	int inputNum;

	num = 0;
	
	printf("���l����͂��Ă��������F");
	scanf("%d", &inputNum);

	num = num + inputNum;

	while (num <= 100) {
		printf("���l����͂��Ă��������F");
		scanf("%d", &inputNum);

		num = num + inputNum;
	}

	printf("���v��%d\n", num);

	return 0;
}