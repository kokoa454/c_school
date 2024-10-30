#include <stdio.h>

void sum(int [][2]);
void average(int[][2]);

int main(void) {
	int points[6][2] = {
		{65, 71},
		{84, 83},
		{74, 74},
		{90, 90},
		{87, 78},
		{93, 95}
	};

	sum(points);
	average(points);

	return 0;
}

void sum(int num[][2]) {
	int i, sum;

	for (i = 0; i < 6; i++) {
		sum = num[i][0] + num[i][1];
		printf("出席番号%dの合計点: %d点\n", i + 1, sum);
	}

	return;
}

void average(int num[][2]) {
	int i, avgJP = 0, avgENG = 0;

	for (i = 0; i < 6; i++) {
		avgJP += num[i][0];
		avgENG += num[i][1];
	}

	printf("国語の平均点: %d点\n", avgJP / 6);
	printf("英語の平均点: %d点\n", avgENG / 6);

	return;
}