#include <stdio.h>

int main(void) {
	int data[10];
	int x;

	printf("�f�[�^��: ");
	scanf("%d", &x);

	if (x < 1 || x > 10) {
		printf("\n!!!ERROR!!!\n");
		return 0;
	}

	for (int i = 0; i < x; i++) {
		printf("%d�ڂ̓_��: ", i + 1);
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < x - 1; i++) {
		int maxNum = i;
		
		for (int j = i + 1; j < x; j++) {
			if (data[j] > data[maxNum]) {
				maxNum = j;
			}
		}

		int w = data[i];
		data[i] = data[maxNum];
		data[maxNum] = w;
	}

	printf("***�\�[�g�ς݃f�[�^(�~��)***\n");

	for (int i = 0; i < x; i++) {
		printf("%d�ڂ̓_��: %d\n", i + 1, data[i]);
	}

	return 0;
}