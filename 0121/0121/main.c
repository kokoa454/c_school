#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize();
void showTable();
void makeBombs();
int getRandom(int, int);

char array[3][3];

int main(void) {
	srand((unsigned int)time(NULL));

	initialize();

	makeBombs();

	showTable();

	return 0;
}

void initialize() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			array[i][j] = ' ';
		}
	}
}

void showTable() {
	printf("    1  2  3  \n");
	printf("  +---------+\n");
	printf("1 | %c  %c  %c |\n", array[0][0], array[0][1], array[0][2]);
	printf("2 | %c  %c  %c |\n", array[1][0], array[1][1], array[1][2]);
	printf("3 | %c  %c  %c |\n", array[2][0], array[2][1], array[2][2]);
	printf("  +---------+\n");
}

int getRandom(int min, int max) {
	return min + (rand() % (max - min + 1));
}

void makeBombs() {
	int loopNum = getRandom(1, 3);

	for (int i = 0; i < loopNum; i++) {
		while (1) {
			int vertical = getRandom(0, 2);
			int horizontal = getRandom(0, 2);

			if (array[vertical][horizontal] == ' ') {
				array[vertical][horizontal] == 'X';

				break;
			}
		}
	}
}