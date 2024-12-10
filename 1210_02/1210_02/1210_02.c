#include <stdio.h>

typedef struct {
	int eng;
	int ja;
	int math;
	int science;
	int social;
}score;

typedef struct {
	int no;
	char name[128];
	int grade;
	char classNo;
	score point;
}student;

void show_header();
void show(student* , int);
void input(student* , int);

int flg = 0;

int main(void) {
	student school[128];
	student* st;
	st = school;

	int inputNum;
	int cnt = 0;
	char yOrn;

	printf("****************���ѕ[****************\n");

	for(; ;) {
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
				show(st, cnt);
			}
			else {
				printf("!ERROR: �f�[�^��1�ȏ���͂��Ă�������!\n\n");
			}
		}
		else if (inputNum == 2) {
			while (flg != 1) {
				printf("%d�l�ڂ̓���\n", (cnt + 1));
				input(st, cnt);
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

void show_header() {
	printf("�@�@�@�@�@�@    �@�@�@�@�@�@�@�@�@�@|�@�@�@�@�@�@�@�_��\n");
	printf("�w�Дԍ�	�����@�w�N�@�N���X�@|�@�p��@����@���w�@���ȁ@�Љ�\n");
	
	return;
}

void show(student *st, int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("%8d�@%10s�@%4d�@%5c �@|�@%4d�@%4d�@%4d�@%4d�@%4d\n", st[i].no , st[i].name, st[i].grade, st[i].classNo, st[i].point.eng, st[i].point.ja, st[i].point.math, st[i].point.science, st[i].point.social);
	}

	printf("\n\n");
	return;
}

void input(student *st, int i) {
	printf("�w�Дԍ� = ");
	scanf("%d", &st[i].no);
	printf("���� = ");
	scanf("%s", &st[i].name);
	printf("�w�N = ");
	scanf("%d", &st[i].grade);
	rewind(stdin);
	printf("�N���X = ");
	scanf("%c", &st[i].classNo);
	printf("\n");
	printf("�_��\n");
	printf("�p��: ");
	scanf("%d", &st[i].point.eng);
	printf("����: ");
	scanf("%d", &st[i].point.ja);
	printf("���w: ");
	scanf("%d", &st[i].point.math);
	printf("����: ");
	scanf("%d", &st[i].point.science);
	printf("�Љ�: ");
	scanf("%d", &st[i].point.social);
	rewind(stdin);

	printf("\n\n");

	return;
}