#include <stdio.h>

struct ExamScore {
	char name[50];
	int score;
};

void main(void) {
	struct ExamScore students[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("名前: ");
		scanf("%s", &students[i].name);
		printf("得点: ");
		scanf("%d", &students[i].score);
		printf("\n");
	}

	printf("\n\n合格者\n");

	for (i = 0; i < 3; i++) {
		if (students[i].score >= 60) {
			printf("%s: %d\n", students[i].name, students[i].score);
		}
	}

	return;
}