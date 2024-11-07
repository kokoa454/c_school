#include <stdio.h>

int main(void) {
	char* pt_name[5], * work;
	char name[5][80];
	int i, j;

	for (i = 0; i < 5; i++) {
		pt_name[i] = name[i];
	}

	printf("–¼‘O‚ğ5‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	for (i = 0; i < 5; i++) {
		scanf("%s", name[i]);
		rewind(stdin);
	}

	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (pt_name[i][0] > pt_name[j][0]) {
				work = pt_name[i];
				pt_name[i] = pt_name[j];
				pt_name[j] = work;
			}
		}
	}

	printf("®—ñŒ‹‰Ê\n");
	for (i = 0; i < 5; i++) {
		printf("%s\n", pt_name[i]);
	}

	printf("\n\n");

	for (i = 0; i < 5; i++) {
		printf("%s\n", name[i]);
	}

	return 0;
}