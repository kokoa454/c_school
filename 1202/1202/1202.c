#include <stdio.h>

int main(void) {
	FILE* fp;
	char str;
	fp = fopen("Source.c", "r");

	if (fp == NULL) {
		printf("�t�B���I�[�v�����s\n");
		return -1;
	}

	while ((str = fgetc(fp) != EOF)) {
		printf("%c", str);
	}

	fclose(fp);
	return 0;
}