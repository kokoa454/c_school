#include <stdio.h>
#include "studentdata.h"

void show(student* st) {
	printf("%8d　%10s　%4d　%5c 　|　%4d　%4d　%4d　%4d　%4d\n", st->no, st->name, st->grade, st->classNo, st->point.eng, st->point.ja, st->point.math, st->point.science, st->point.social);
	return;
}