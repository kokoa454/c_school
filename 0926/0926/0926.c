#include <stdio.h>

int main(void) {
	int data[6][2] = { {65, 71}, {84, 83}, {74, 74}, {90, 90}, {87, 78}, {93, 95} };
	int avrJP = 0;
	int avrEN = 0;

	for (int i = 0; i < 6; i++) {
		int sum = 0;

		for (int j = 0; j < 2; j++) {
			sum = sum + data[i][j];
		}

		printf("出席番号%dの合計点: %d点\n", i + 1, sum);
	}

	for (int i = 0; i < 6; i++) {
		avrJP = avrJP + data[i][0];
		avrEN = avrEN + data[i][1];
	}

	avrJP = avrJP / 6;
	avrEN = avrEN / 6;

	printf("\n\n国語の平均点: %d点\n", avrJP);
	printf("英語の平均点: %d点\n", avrEN);

	return 0;
}