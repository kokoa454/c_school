#include <stdio.h>

int main(void) {
	FILE* fp;
	char characters[4];
	int i;

	fp = fopen("data.txt", "r");

	if (fp == NULL) {
		printf("ファイルオープン失敗\n");
		return -1;
	}
	else {
		for (i = 0; fgets(characters, 4, fp) != NULL; i++) {
			printf("%d回目: %s\n", i + 1, characters);
		}
	}

	fclose(fp);
	return 0;
}