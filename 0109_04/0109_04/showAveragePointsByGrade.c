#include <stdio.h>
#include "studentdata.h"

void showAveragePointsByGrade(student* st, int* cnt_p) {
	int gradeAndPoints[8][2];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 2; j++) {
			gradeAndPoints[i][j] = 0;
		}
	}

	for (int i = 0; i < *cnt_p; i++) {
		int sum = st[i].point.eng + st[i].point.ja + st[i].point.math + st[i].point.science + st[i].point.social;

		gradeAndPoints[st[i].grade - 1][0] += sum;
		gradeAndPoints[st[i].grade - 1][1] += 1;
	}

	for (int i = 0; i < 8; i++) {
		if (gradeAndPoints[i][0] != 0) {
			int avg = gradeAndPoints[i][0] / gradeAndPoints[i][1];
			printf("学年 = %d　平均点 = %d\n", i + 1, avg);
		}
	}

	printf("\n");
}