#include <stdio.h>

int main(void) {
	char alpha[3] = "ABC";
	int i = 0;

	while (alpha[i] != '\0') {
		printf("文字%cの文字コードは%02xです\n", alpha[i], alpha[i]);
		i++;
	}

	return 0;
}