#include <stdio.h>

int main(void) {
	char alpha[4] = "ABC";
	int i = 0;

	while (alpha[i] != '\0') {
		printf("����%c�̕����R�[�h��%02x�ł�\n", alpha[i], alpha[i]);
		i++;
	}

	return 0;
}