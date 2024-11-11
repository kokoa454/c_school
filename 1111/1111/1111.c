#include <stdio.h>

void ryaku(char**);

int main(void) {
	char* youbi[] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday", NULL };

	ryaku(youbi);

	return 0;
}

void ryaku(char** p_youbi) {
	int i, j;

	for (i = 0; p_youbi[i]; i++) {
		for (j = 0; j < 3; j++) {
			printf("%c", p_youbi[i][j]);
		}

		printf("‚Í%s‚Ì—ª‚Å‚·\n", p_youbi[i]);
	}

	return;
}