#include <stdio.h>
#include <stdlib.h>
#include "studentdata.h"

void read(student *st, int *cnt_p) {
	FILE* file_p;
	int i = 0;

	file_p = fopen("成績表.txt", "r");
	if (file_p == NULL) {
		printf("!ERROR: ファイルが開けません!\n\n");
		exit(EXIT_FAILURE);
	}

	while (fscanf(file_p, "%d %s %d %c %d %d %d %d %d", &st[*cnt_p].no, &st[*cnt_p].name, &st[*cnt_p].grade, &st[*cnt_p].classNo, &st[*cnt_p].point.eng, &st[*cnt_p].point.ja, &st[*cnt_p].point.math, &st[*cnt_p].point.science, &st[*cnt_p].point.social) != EOF) {
		(*cnt_p)++;
	}

	if (fclose(file_p) == EOF) {
		printf("!ERROR: ファイルを閉じれません!\n\n");
		exit(EXIT_FAILURE);
	}

	printf("ファイルからの入力完了\n\n");

	return;
}