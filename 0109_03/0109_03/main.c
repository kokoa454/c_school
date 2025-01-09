#include <stdio.h>
#include "studentdata.h"

int main(void) {
	student school[128];
	student* st;
	st = school;
	int flg = 0;

	int inputNum;
	int cnt = 0;
	int* cnt_p;
	cnt_p = &cnt;
	char yOrn;

	printf("****************���ѕ[****************\n");

	for (; ;) {
		flg = 0;

		printf("�@�\��I�����Ă�������\n");
		printf("1: ���ѕ\��\n");
		printf("2: �f�[�^����\n");
		printf("3: �t�@�C���ɏo��\n");
		printf("4: �t�@�C���������\n");
		printf("5: �w�肵���w�Дԍ��̃f�[�^���폜\n");
		printf("6: �w�N���Ƀf�[�^���\�[�g\n");
		printf("7: �w�Дԍ����Ƀf�[�^���\�[�g\n");
		printf("8: �ō��_�ƍŒ�_���o��\n");
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
		else if (inputNum == 3) {
			if (cnt <= 0) {
				printf("!ERROR: �f�[�^��1�ȏ���͂��Ă�������!\n\n");
			}
			else {
				save(st, cnt_p);
			}
		}
		else if (inputNum == 4) {
			initialize(st, cnt_p);
			read(st, cnt_p);
		}
		else if (inputNum == 5) {
			if (cnt <= 0) {
				printf("!ERROR: �f�[�^��1�ȏ���͂��Ă�������!\n\n");
			}
			else {
				delete(st, cnt_p);
			}
		}
		else if (inputNum == 6) {
			sortByGrade(st, cnt_p);
		}
		else if (inputNum == 7) {
			sortById(st, cnt_p);
		}
		else if (inputNum == 8) {
			if (cnt <= 0) {
				printf("!ERROR: �f�[�^��1�ȏ���͂��Ă�������!\n\n");
			}
			else {
				showHighestAndLowestPoints(st, cnt_p);
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