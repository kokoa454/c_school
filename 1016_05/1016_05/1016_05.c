#include <stdio.h>

int main(void) {
	char alpha1[4];
	char alpha2[4] = "ABC";

	alpha1[0] = 'A';
	alpha1[1] = 'B';
	alpha1[2] = 'C';

	int i;

	for (i = 0; i < 4; i++) {
		printf("����%c�̕����R�[�h��%02x�ł�\n", alpha1[i], alpha1[i]);
	}

	for (i = 0; i < 4; i++) {
		printf("����%c�̕����R�[�h��%02x�ł�\n", alpha2[i], alpha2[i]);
	}

	return 0;
}