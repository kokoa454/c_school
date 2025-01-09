#include <stdio.h>
#include "studentdata.h"

void delete(student* st, int* cnt_p) {
	int studentId;
	int flg = 0;

	printf("学籍番号を指定してください\n");
	scanf("%d", &studentId);

	for (int i = 0; i < *cnt_p; i++) {
		if(st[i].no == studentId) {
			st[i].no = NULL;
			
			for (int j = 0; j < 128; j++) {
				st[i].name[j] = NULL;
			}

			st[i].grade = NULL;
			st[i].classNo = NULL;
			st[i].point.eng = NULL;
			st[i].point.ja = NULL;
			st[i].point.math = NULL;
			st[i].point.science = NULL;
			st[i].point.social = NULL;

			if (i != *cnt_p - 1) {
				for (int j = i; j < *cnt_p; j++) {
					st[j].no = st[j + 1].no;
					
					for (int k = 0; k < 128; k++) {
						st[j].name[k] = st[j + 1].name[k];
					}

					st[j].grade = st[j + 1].grade;
					st[j].classNo = st[j + 1].classNo;
					st[j].point.eng = st[j + 1].point.eng;
					st[j].point.ja = st[j + 1].point.ja;
					st[j].point.math = st[j + 1].point.math;
					st[j].point.science = st[j + 1].point.science;
					st[j].point.social = st[j + 1].point.social;
				}
			}

			*cnt_p -= 1;

			flg = 1;
			break;
		}
	}

	if (flg == 0) {
		printf("存在する学籍番号を指定してください\n");
	}
}