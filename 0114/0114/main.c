#include <stdio.h>

void showCircle();
void showCross();

char locationData[5][5];

int main(void) {	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			locationData[i][j] = '*';
		}
	}

	showCircle();
	showCross();

	return 0;
}

void showCircle() {
	int inputHorizontal;
	int inputVertical;

	printf("O�̔Ԃł��B�ǂ��ɒu���܂����H\n");

	int flg = 0;
	while (flg == 0) {
		printf(">�������̍��W: ");
		scanf("%d", &inputHorizontal);
		printf(">�c�����̍��W: ");
		scanf("%d", &inputVertical);

		if (inputHorizontal > 4 || inputVertical > 4 || locationData[inputVertical][inputHorizontal] != '*') {
			printf("�s���ȓ��͂ł�\n");
		}
		else {
			flg = 1;
		}
	}

	locationData[inputVertical][inputHorizontal] = 'O';

	printf(" �@0�@1�@2�@3�@4\n");

	for (int i = 0; i < 5; i++) {
		printf("%d", i);
		for (int j = 0; j < 5; j++) {
			printf("�@%c", locationData[i][j]);
		}
		printf("\n");
	}
}

void showCross() {
	int inputHorizontal;
	int inputVertical;

	printf("X�̔Ԃł��B�ǂ��ɒu���܂����H\n");

	int flg = 0;
	while (flg == 0) {
		printf(">�������̍��W: ");
		scanf("%d", &inputHorizontal);
		printf(">�c�����̍��W: ");
		scanf("%d", &inputVertical);

		if (inputHorizontal > 4 || inputVertical > 4 || locationData[inputVertical][inputHorizontal] != '*') {
			printf("�s���ȓ��͂ł�\n");
		}
		else {
			flg = 1;
		}
	}

	locationData[inputVertical][inputHorizontal] = 'X';

	printf(" �@0�@1�@2�@3�@4\n");

	for (int i = 0; i < 5; i++) {
		printf("%d", i);
		for (int j = 0; j < 5; j++) {
			printf("�@%c", locationData[i][j]);
		}
		printf("\n");
	}
}