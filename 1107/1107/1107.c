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
		printf("��%d�j����%s\n", i + 1, dayOfWeek[i]);
	}

	return 0;
}