#include <stdio.h>
#include "studentdata.h"

void show(student* st) {
	int sum = st->point.eng + st->point.ja + st->point.math + st->point.science + st->point.social;
	printf("%8d　%10s　%4d　%5c 　|　%4d　%4d　%4d　%4d　%4d　%5d\n", st->no, st->name, st->grade, st->classNo, st->point.eng, st->point.ja, st->point.math, st->point.science, st->point.social, sum);
	return;
}