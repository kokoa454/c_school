#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[256], str2[] = "DRAGONQUEST";

	scanf("%s", str1);
	if (strcmp(str1, str2) == 0) {
		printf("“¯‚¶\n");
	}
	else {
		printf("ˆá‚¤\n");
	}

	return 0;
}