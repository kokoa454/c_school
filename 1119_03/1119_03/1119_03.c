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

	printf("���O: ");
	scanf("%s", &exmRslt.name);
	printf("���_: ");
	scanf("%d", &exmRslt.score);
	
	setResult(&exmRslt);

	printf("%s, %d�_, ���� %c\n", exmRslt.name, exmRslt.score, exmRslt.result);

	return;
}