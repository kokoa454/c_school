#include <stdio.h>
#include "studentdata.h"

int main(void) {
	student school[128];
	student* st;
	st = school;
	int flg = 0;

	int inputNum;
	int cnt = 0;
	char yOrn;

	printf("****************���ѕ[****************\n");

	for (; ;) {
		flg = 0;

		printf("�@�\��I�����Ă�������\n");
		printf("1: ���ѕ\��\n");
		printf("2: �f�[�^����\n");
		printf("0: �I��\n");
		printf(">>");
		scanf("%d", &inputNum);

		if (inputNum == 1) {
			if (cnt != 0) {
				show_header();
				for (int i = 0; i < cnt; i++) {
					show(&st[i]);
				}
				printf("\n\n");
			}
			else {
				printf("!ERROR: �f�[�^��1�ȏ���͂��Ă�������!\n\n");
			}
		}
		else if (inputNum == 2) {
			while (flg != 1) {
				printf("%d�l�ڂ̓���\n", (cnt + 1));
				input(st + cnt);
				cnt++;

				printf("���͂��I�����܂����H (y or n)\n");
				printf(">>");
				scanf("%c", &yOrn);

				if (yOrn == 'y') {
					flg = 1;
				}
			}
		}
		else if (inputNum == 0) {
			break;
		}
		else {
			printf("!ERROR: �����Ȑ����ł�!\n");
		}
	}

	return 0;
}