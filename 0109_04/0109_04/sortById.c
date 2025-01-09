#include <stdio.h>
#include "studentdata.h"

void sortById(student* st, int* cnt_p) {
	for (int i = 0; i < *cnt_p; i++) {
		for (int j = i + 1; j < *cnt_p; j++) {
			if (st[i].no > st[j].no) {
				int workNo = st[i].no;
				char workName[128];

				for (int k = 0; k < 128; k++) {
					workName[k] = st[i].name[k];
				}

				int workGrade = st[i].grade;
				char workClassNo = st[i].classNo;
				int workPointEng = st[i].point.eng;
				int workPointJa = st[i].point.ja;
				int workPointMath = st[i].point.math;
				int workPointScience = st[i].point.science;
				int workPointSocial = st[i].point.social;

				st[i].no = st[j].no;

				for (int k = 0; k < 128; k++) {
					st[i].name[k] = st[j].name[k];
				}

				st[i].grade = st[j].grade;
				st[i].classNo = st[j].classNo;
				st[i].point.eng = st[j].point.eng;
				st[i].point.ja = st[j].point.ja;
				st[i].point.math = st[j].point.math;
				st[i].point.science = st[j].point.science;
				st[i].point.social = st[j].point.social;


				st[j].no = workNo;

				for (int k = 0; k < 128; k++) {
					st[j].name[k] = workName[k];
				}

				st[j].grade = workGrade;
				st[j].classNo = workClassNo;
				st[j].point.eng = workPointEng;
				st[j].point.ja = workPointJa;
				st[j].point.math = workPointMath;
				st[j].point.science = workPointScience;
				st[j].point.social = workPointSocial;
			}
		}
	}
}