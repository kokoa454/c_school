#include <stdio.h>
#include <stdlib.h>
#include "studentdata.h"

int main(void) {
	student school[128];
	student* st;
	st = school;
	FILE* file_p;
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
		printf("3: �t�@�C���ɏo��\n");
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
				file_p = fopen("���ѕ\.txt", "w+");
				if (file_p == NULL){
					printf("!ERROR: �t�@�C�����J���܂���!\n\n");
					exit(EXIT_FAILURE);
				}

				for (int i = 0; i < cnt; i++) {
					fprintf(file_p, "%d %s %d %c %d %d %d %d %d\n", st[i].no, st[i].name, st[i].grade, st[i].classNo, st[i].point.eng, st[i].point.ja, st[i].point.math, st[i].point.science, st[i].point.social);
				}

				if (fclose(file_p) == EOF) {
					printf("!ERROR: �t�@�C�������܂���!\n\n");
					exit(EXIT_FAILURE);
				}
				
				printf("�t�@�C���ւ̕ۑ�����\n");
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