#include <stdio.h>

int main(void) {
	FILE* fp;
	char characters[4];
	int i;

	fp = fopen("data.txt", "r");

	if (fp == NULL) {
		printf("�t�@�C���I�[�v�����s\n");
		return -1;
	}
	else {
		for (i = 0; fgets(characters, 4, fp) != NULL; i++) {
			printf("%d���: %s\n", i + 1, characters);
		}
	}

	fclose(fp);
	return 0;
}