#include <stdio.h>

struct ExamResults{
	char name[50];
	int score;
	char result;
};

void setResult(struct ExamResults* exmRslt_p) {
	if (exmRslt_p->score >= 80) {
		exmRslt_p->result = 'A';
	}
	else if (exmRslt_p->score >= 70) {
		exmRslt_p->result = 'B';
	}
	else {
		exmRslt_p->result = 'C';
	}
}

void main(void) {
	struct ExamResults exmRslt;

	printf("ñºëO: ");
	scanf("%s", &exmRslt.name);
	printf("ìæì_: ");
	scanf("%d", &exmRslt.score);
	
	setResult(&exmRslt);

	printf("%s, %dì_, ê¨ê— %c\n", exmRslt.name, exmRslt.score, exmRslt.result);

	return;
}