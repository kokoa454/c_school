#include <stdio.h>

int main(void) {
	char data[10];
	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL) {
		printf("ファイルが開けません\n");
		return -1;
	}
	else {
		while (fgets(data, 256, fp) != NULL) {
			printf("%s\n", data);
		}

		for (int i = 0; i < 10; i++) {
			printf("data[%d] = %c\n", i, data[i]);
		}
	}

	fclose(fp);
	return 0;
}