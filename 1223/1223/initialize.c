#include <stdio.h>
#include "studentdata.h"

void initialize(student* st, int* cnt_p) {
	st->no = 0;
	
	for (int i = 0; i < 128; i++) {
		st->name[i] = "";
	}

	st->grade = 0;
	st->classNo = 0;
	st->point.eng = 0;
	st->point.ja = 0;
	st->point.math = 0;
	st->point.science = 0;
	st->point.social = 0;

	*cnt_p = 0;

	return;
}