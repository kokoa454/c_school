#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j;
	int num = 3;
	char words[3][20], tmp[20];

	printf("3�̕�����(���p�p����)����͂��Ă�������\n");
	
	for (i = 0; i < num; i++) {
		printf("%d�ڂ̕����� =", i + 1);
		scanf("%s", words[i]);
	}

	for (i = 0; i < num; i++) {
		for (j = i + 1; j < num; j++) {
			if (strcmp(words[i], words[j]) > 0) {
				strcpy(tmp, words[i]);
				strcpy(words[i], words[j]);
				strcpy(words[j], tmp);
			}
		}
	}

	printf("\n��������\�[�g���܂���\n");

	for (i = 0; i < num; i++) {
		printf("%s\n", words[i]);
	}

	return 0;
}