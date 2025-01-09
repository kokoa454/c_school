#include <stdio.h>
#include "studentdata.h"

void showHighestAndLowestPoints(student* st, int* cnt_p) {
	int highestPoints = 0;
	int lowestPoints = 500;
	char nameOfHighest[128];
	char nameOfLowest[128];

	for (int i = 0; i < *cnt_p; i++) {
		int sum = st[i].point.eng + st[i].point.ja + st[i].point.math + st[i].point.science + st[i].point.social;

		if (highestPoints < sum) {
			highestPoints = sum;

			for (int j = 0; j < 128; j++) {
				nameOfHighest[j] = NULL;
				nameOfHighest[j] = st[i].name[j];
			}
		}

		if (lowestPoints > sum) {
			lowestPoints = sum;

			for (int j = 0; j < 128; j++) {
				nameOfLowest[j] = NULL;
				nameOfLowest[j] = st[i].name[j];
			}
		}
	}

	printf("最高点 = %d　氏名 = %s\n", highestPoints, nameOfHighest);
	printf("最低点 = %d　氏名 = %s\n\n", lowestPoints, nameOfLowest);
}