#include <stdio.h>

int main(void) {
	char data[2048];
	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL) {
		printf("ファイルが開けません\n");
		return -1;
	}
	else {
		while (fgets(data, 256, fp) != NULL) {
			printf("%s\n", data);
		}
	}

	fclose(fp);
	return 0;
}