#include <stdio.h>

struct ExamScore {
	char name[50];
	int score;
};

void main(void) {
	struct ExamScore students[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("���O: ");
		scanf("%s", &students[i].name);
		printf("���_: ");
		scanf("%d", &students[i].score);
		printf("\n");
	}

	printf("\n\n���i��\n");

	for (i = 0; i < 3; i++) {
		if (students[i].score >= 60) {
			printf("%s: %d\n", students[i].name, students[i].score);
		}
	}

	return;
}