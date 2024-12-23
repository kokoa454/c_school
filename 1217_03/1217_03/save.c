#include <stdio.h>
#include <stdlib.h>
#include "studentdata.h"

void save(student *st, int *cnt_p) {
	FILE* file_p;

	file_p = fopen("���ѕ\.txt", "a+");
	if (file_p == NULL) {
		printf("!ERROR: �t�@�C�����J���܂���!\n\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < *cnt_p; i++) {
		fprintf(file_p, "%d %s %d %c %d %d %d %d %d\n", st[i].no, st[i].name, st[i].grade, st[i].classNo, st[i].point.eng, st[i].point.ja, st[i].point.math, st[i].point.science, st[i].point.social);
	}

	if (fclose(file_p) == EOF) {
		printf("!ERROR: �t�@�C�������܂���!\n\n");
		exit(EXIT_FAILURE);
	}

	printf("�t�@�C���ւ̕ۑ�����\n\n");

	return;
}