#include <stdio.h>

void showCircle();
void showCross();
int checkIfWin();

char locationData[5][5];

int main(void) {	
	int endFlg = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			locationData[i][j] = '*';
		}
	}

	while (1) {
		showCircle();
		if (checkIfWin() == 1) {
			endFlg = 1;
			break;
		}

		showCross();
		if (checkIfWin() == 1) {
			endFlg = 1;
			break;
		}
	}

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

		if (inputHorizontal < 0 || inputHorizontal > 4 || inputVertical < 0 || inputVertical > 4 || locationData[inputVertical][inputHorizontal] != '*') {
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

		if (inputHorizontal < 0 || inputHorizontal > 4 || inputVertical < 0 || inputVertical > 4 || locationData[inputVertical][inputHorizontal] != '*' || isdigit(inputHorizontal) != 0 || isdigit(inputVertical) != 0) {
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

int checkIfWin() {
	int cntO = 0;
	int cntX = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (locationData[i][j] == 'O') {
				cntO++;

				if (cntO == 5) {
					printf("O�̏����ł��I\n");
					return 1;
				}
			}

			if (locationData[i][j] == 'X') {
				cntX++;

				if (cntX == 5) {
					printf("X�̏����ł��I\n");
					return 1;
				}
			}
		}

		cntO = 0;
		cntX = 0;

		for (int j = 0; j < 5; j++) {
			if (locationData[j][i] == 'O') {
				cntO++;

				if (cntO == 5) {
					printf("O�̏����ł��I\n");
					return 1;
				}
			}

			if (locationData[j][i] == 'X') {
				cntX++;

				if (cntX == 5) {
					printf("X�̏����ł��I\n");
					return 1;
				}
			}
		}

		cntO = 0;
		cntX = 0;
	}

	for (int i = 0; i < 5; i++) {
		if (locationData[i][i] == 'O') {
			cntO++;

			if (cntO == 5) {
				printf("O�̏����ł��I\n");
				return 1;
			}
		}

		if (locationData[i][i] == 'X') {
			cntX++;

			if (cntX == 5) {
				printf("X�̏����ł��I\n");
				return 1;
			}
		}


		cntO = 0;
		cntX = 0;
	}

	for (int i = 0; i < 5; i++) {
		if (locationData[i][4 - i] == 'O') {
			cntO++;

			if (cntO == 5) {
				printf("O�̏����ł��I\n");
				return 1;
			}
		}

		if (locationData[i][4 - i] == 'X') {
			cntX++;

			if (cntX == 5) {
				printf("X�̏����ł��I\n");
				return 1;
			}
		}
	}

	return 0;
}