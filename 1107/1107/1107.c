#include <stdio.h>

int main(void) {
	char *dayOfWeek[] = {
		"monday",
		"tuesday",
		"wednesday",
		"thursday",
		"friday",
		"saturday",
		"sunday",
		NULL
	};

	int i;

	for (i = 0; dayOfWeek[i] != NULL; i++) {
		printf("‘æ%d—j“ú‚Í%s\n", i + 1, dayOfWeek[i]);
	}

	return 0;
}