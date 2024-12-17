#include <stdio.h>
#include <stdlib.h>
#include "studentdata.h"

void save(student *st) {
	FILE* file_p;

	file_p = fopen("成績表.txt", "w+");
	if (file_p == NULL) {
		printf("!ERROR: ファイルが開けません!\n\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < sizeof(*st) / sizeof(st[0]); i++) {
		fprintf(file_p, "%d %s %d %c %d %d %d %d %d\n", st[i].no, st[i].name, st[i].grade, st[i].classNo, st[i].point.eng, st[i].point.ja, st[i].point.math, st[i].point.science, st[i].point.social);
	}

	if (fclose(file_p) == EOF) {
		printf("!ERROR: ファイルを閉じれません!\n\n");
		exit(EXIT_FAILURE);
	}

	printf("ファイルへの保存完了\n");
}