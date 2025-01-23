#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize();
void showTable();
void makeBomb();
int getRandom(int, int);
void makeNumPlace();
int checkX(int);
int checkUsrNum(int, int);
int checkWin();

char array[3][3];
char arrayShow[3][3];
int cntBomb;

int main(void) {
	int cnt = 1;

	srand((unsigned int)time(NULL));

	initialize();

	makeBomb();

	makeNumPlace();

	showTable();

	while (1) {
		int x;
		int y;

		while (1) {
			printf("場所を入力してください (x y) [%d回目]: ", cnt);
			scanf("%d %d", &x, &y);

			if (x < 1 || x > 3 || y < 1 || y > 3) {
				printf("不正な入力です\n");
			}
			else if (arrayShow[y - 1][x - 1] != ' ') {
				printf("既に開けています。もう一度入力してください\n");
			}
			else {
				break;
			}
		}

		if (checkUsrNum(x - 1, y - 1) == 1) {
			break;
		}
		else if (checkWin() == 1) {
			break;
		}

		cnt++;

	}
	return 0;
}

void initialize() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			array[i][j] = '0';
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arrayShow[i][j] = ' ';
		}
	}
}

void showTable() {
	printf("    1  2  3  \n");
	printf("  +---------+\n");
	printf("1 | %c  %c  %c |\n", arrayShow[0][0], arrayShow[0][1], arrayShow[0][2]);
	printf("2 | %c  %c  %c |\n", arrayShow[1][0], arrayShow[1][1], arrayShow[1][2]);
	printf("3 | %c  %c  %c |\n", arrayShow[2][0], arrayShow[2][1], arrayShow[2][2]);
	printf("  +---------+\n");
}

int getRandom(int min, int max) {
	return min + (rand() % (max - min + 1));
}

void makeBomb() {
	int loopNum = getRandom(1, 3);
	cntBomb = loopNum;

	for (int i = 0; i < loopNum; i++) {
		while (1) {
			int vertical = getRandom(0, 2);
			int horizontal = getRandom(0, 2);

			if (array[vertical][horizontal] == '0') {
				array[vertical][horizontal] = 'X';

				break;
			}
		}
	}
}

int checkX(int num) {
	if (num == 'X') {
		return 0;
	}
	else {
		return 1;
	}
}

void makeNumPlace() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (array[i][j] == 'X') {
				if (i == 0) {
					if (j == 0) {
						int w1 = (int)array[i][j + 1];
						if (checkX(w1) == 1) {
							w1++;
							array[i][j + 1] = (char)w1;
						}

						int w2 = (int)array[i + 1][j];
						if (checkX(w2) == 1) {
							w2++;
							array[i + 1][j] = (char)w2;
						}

						int w3 = (int)array[i + 1][j + 1];
						if (checkX(w3) == 1) {
							w3++;
							array[i + 1][j + 1] = (char)w3;
						}
					}

					if (j == 1) {
						int w1 = (int)array[i][j - 1];
						if (checkX(w1) == 1) {
							w1++;
							array[i][j - 1] = (char)w1;
						}

						int w2 = (int)array[i][j + 1];
						if (checkX(w2) == 1) {
							w2++;
							array[i][j + 1] = (char)w2;
						}

						int w3 = (int)array[i + 1][j - 1];
						if (checkX(w3) == 1) {
							w3++;
							array[i + 1][j - 1] = (char)w3;
						}

						int w4 = (int)array[i + 1][j];
						if (checkX(w4) == 1) {
							w4++;
							array[i + 1][j] = (char)w4;
						}

						int w5 = (int)array[i + 1][j + 1];
						if (checkX(w5) == 1) {
							w5++;
							array[i + 1][j + 1] = (char)w5;
						}
					}

					if (j == 2) {
						int w1 = (int)array[i][j - 1];
						if (checkX(w1) == 1) {
							w1++;
							array[i][j - 1] = (char)w1;
						}

						int w2 = (int)array[i + 1][j - 1];
						if (checkX(w2) == 1) {
							w2++;
							array[i + 1][j - 1] = (char)w2;
						}

						int w3 = (int)array[i + 1][j];
						if (checkX(w3) == 1) {
							w3++;
							array[i + 1][j] = (char)w3;
						}
					}
				}

				if (i == 1) {
					if (j == 0) {
						int w1 = (int)array[i - 1][j];
						if (checkX(w1) == 1) {
							w1++;
							array[i - 1][j] = (char)w1;
						}

						int w2 = (int)array[i - 1][j + 1];
						if (checkX(w2) == 1) {
							w2++;
							array[i - 1][j + 1] = (char)w2;
						}

						int w3 = (int)array[i][j + 1];
						if (checkX(w3) == 1) {
							w3++;
							array[i][j + 1] = (char)w3;
						}

						int w4 = (int)array[i + 1][j];
						if (checkX(w4) == 1) {
							w4++;
							array[i + 1][j] = (char)w4;
						}

						int w5 = (int)array[i + 1][j + 1];
						if (checkX(w5) == 1) {
							w5++;
							array[i + 1][j + 1] = (char)w5;
						}
					}

					if (j == 1) {
						int w1 = (int)array[i - 1][j - 1];
						if (checkX(w1) == 1) {
							w1++;
							array[i - 1][j - 1] = (char)w1;
						}

						int w2 = (int)array[i - 1][j];
						if (checkX(w2) == 1) {
							w2++;
							array[i - 1][j] = (char)w2;
						}

						int w3 = (int)array[i - 1][j + 1];
						if (checkX(w3) == 1) {
							w3++;
							array[i - 1][j + 1] = (char)w3;
						}

						int w4 = (int)array[i][j - 1];
						if (checkX(w4) == 1) {
							w4++;
							array[i][j - 1] = (char)w4;
						}

						int w5 = (int)array[i][j + 1];
						if (checkX(w5) == 1) {
							w5++;
							array[i][j + 1] = (char)w5;
						}

						int w6 = (int)array[i + 1][j - 1];
						if (checkX(w6) == 1) {
							w6++;
							array[i + 1][j - 1] = (char)w6;
						}

						int w7 = (int)array[i + 1][j];
						if (checkX(w7) == 1) {
							w7++;
							array[i + 1][j] = (char)w7;
						}

						int w8 = (int)array[i + 1][j + 1];
						if (checkX(w8) == 1) {
							w8++;
							array[i + 1][j + 1] = (char)w8;
						}
					}

					if (j == 2) {
						int w1 = (int)array[i - 1][j - 1];
						if (checkX(w1) == 1) {
							w1++;
							array[i - 1][j - 1] = (char)w1;
						}

						int w2 = (int)array[i - 1][j];
						if (checkX(w2) == 1) {
							w2++;
							array[i - 1][j] = (char)w2;
						}

						int w3 = (int)array[i][j - 1];
						if (checkX(w3) == 1) {
							w3++;
							array[i][j - 1] = (char)w3;
						}

						int w4 = (int)array[i + 1][j - 1];
						if (checkX(w4) == 1) {
							w4++;
							array[i + 1][j - 1] = (char)w4;
						}

						int w5 = (int)array[i + 1][j];
						if (checkX(w5) == 1) {
							w5++;
							array[i + 1][j] = (char)w5;
						}
					}
				}

				if (i == 2) {
					if (j == 0) {
						int w1 = (int)array[i - 1][j];
						if (checkX(w1) == 1) {
							w1++;
							array[i - 1][j] = (char)w1;
						}

						int w2 = (int)array[i - 1][j + 1];
						if (checkX(w2) == 1) {
							w2++;
							array[i - 1][j + 1] = (char)w2;
						}

						int w3 = (int)array[i][j + 1];
						if (checkX(w3) == 1) {
							w3++;
							array[i][j + 1] = (char)w3;
						}
					}

					if (j == 1) {
						int w1 = (int)array[i - 1][j - 1];
						if (checkX(w1) == 1) {
							w1++;
							array[i - 1][j - 1] = (char)w1;
						}

						int w2 = (int)array[i - 1][j];
						if (checkX(w2) == 1) {
							w2++;
							array[i - 1][j] = (char)w2;
						}

						int w3 = (int)array[i - 1][j + 1];
						if (checkX(w3) == 1) {
							w3++;
							array[i - 1][j + 1] = (char)w3;
						}

						int w4 = (int)array[i][j - 1];
						if (checkX(w4) == 1) {
							w4++;
							array[i][j - 1] = (char)w4;
						}

						int w5 = (int)array[i][j + 1];
						if (checkX(w5) == 1) {
							w5++;
							array[i][j - 1] = (char)w5;
						}
					}

					if (j == 2) {
						int w1 = (int)array[i - 1][j - 1];
						if (checkX(w1) == 1) {
							w1++;
							array[i - 1][j - 1] = (char)w1;
						}

						int w2 = (int)array[i - 1][j];
						if (checkX(w2) == 1) {
							w2++;
							array[i - 1][j] = (char)w2;
						}

						int w3 = (int)array[i][j - 1];
						if (checkX(w3) == 1) {
							w3++;
							array[i][j - 1] = (char)w3;
						}
					}
				}
			}
		}
	}
}

int checkUsrNum(int x, int y) {
	if (array[y][x] != 'X') {
		arrayShow[y][x] = array[y][x];
		showTable();

		return 0;
	}
	else {
		printf("爆弾●～*\n\n");

		return 1;
	}
}

int checkWin() {
	int sumBox = 0;
	sumBox += cntBomb;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arrayShow[i][j] != ' ') {
				sumBox++;
			}
		}
	}

	if (sumBox == 9) {
		printf("クリア!!\n\n");

		return 1;
	}
	else {
		return 0;
	}
}