#include <stdio.h>

int main(void) {
	int p1, p2;

	printf("���ԃe�X�g�̓_���F");
	scanf("%d", &p1);
	printf("�����e�X�g�̓_���F");
	scanf("%d", &p2);

	if (p1 >= 80 && p2 >= 80) {
		printf("���т́u�D�v�ł�\n");
	}
	else if (p1 + p2 >= 140) {
		printf("���т́u�ǁv�ł�\n");
	}
	else if (p1 + p2 >= 100 && (p1 >= 90 || p2 >= 90)) {
		printf("���т́u�v�ł�\n");
	}
	else {
		printf("���т́u�s�v�ł�\n");
	}

	return 0;
}