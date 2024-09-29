#include <stdio.h>
int data[10];

int sortNum(int x);
int searchNum(int x, int y);

int main(void) {
	int x;
	int y;

	printf("�f�[�^��: ");
	scanf("%d", &x);

	if (x < 1 || x > 10) {
		printf("\n\n!!!ERROR!!!\n");
		return 0;
	}

	sortNum(x);

	printf("***�\�[�g�ς݃f�[�^(�~��)***\n");

	for (int i = 0; i < x; i++) {
		printf("%d�ڂ̓_��: %d\n", i + 1, data[i]);
	}
	
	printf("***2���T���@�ɂ��f�[�^�T��***\n");

	printf("�T���f�[�^: ");
	scanf("%d", &y);

	searchNum(x, y);

	return 0;
}

int sortNum(int x) {
	for (int i = 0; i < x; i++) {
		printf("%d�ڂ̓_��: ", i + 1);
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < x; i++) {
		for (int j = x - 1; j > i; j--) {
			if (data[j - 1] < data[j]) {
				int w = data[j - 1];
				data[j - 1] = data[j];
				data[j] = w;
			}
		}
	}

	return 0;
}

int searchNum(int x, int y) {
	int start = 0;
	int end = x - 1;

	while (start <= end) {
		int center = (start + end) / 2;
		
		if (data[center] == y) {
			printf("�T���f�[�^��%d�ڂ̃f�[�^�ł��B", center + 1);
			return 0;
		}
		else {
			if (data[center] < y) {
				end = center - 1;
			}
			else {
				start = center + 1;
			}
		}
	}

	printf("�T���f�[�^�͌�����܂���ł����B\n");

	return 0;
}