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
void show(student*);
void input(student*);

int flg = 0;

int main(void) {
	student school[128];
	student* st;
	st = school;

	int inputNum;
	int cnt = 0;
	char yOrn;

	printf("****************成績票****************\n");

	for(; ;) {
		flg = 0;

		printf("機能を選択してください\n");
		printf("1: 成績表示\n");
		printf("2: データ入力\n");
		printf("0: 終了\n");
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
				printf("!ERROR: データを1つ以上入力してください!\n\n");
			}
		}
		else if (inputNum == 2) {
			while (flg != 1) {
				printf("%d人目の入力\n", (cnt + 1));
				input(st + cnt);
				cnt++;

				printf("入力を終了しますか？ (y or n)\n");
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
			printf("!ERROR: 無効な数字です!\n");
		}
	}

	return 0;
}

void show_header() {
	printf("　　　　　　    　　　　　　　　　　|　　　　　　　点数\n");
	printf("学籍番号	氏名　学年　クラス　|　英語　国語　数学　理科　社会\n");
	
	return;
}

void show(student *st) {
	printf("%8d　%10s　%4d　%5c 　|　%4d　%4d　%4d　%4d　%4d\n", st->no , st->name, st->grade, st->classNo, st->point.eng, st->point.ja, st->point.math, st->point.science, st->point.social);
	return;
}

void input(student *st) {
	printf("学籍番号 = ");
	scanf("%d", &st->no);
	printf("氏名 = ");
	scanf("%s", &st->name);
	printf("学年 = ");
	scanf("%d", &st->grade);
	rewind(stdin);
	printf("クラス = ");
	scanf("%c", &st->classNo);
	printf("\n");
	printf("点数\n");
	printf("英語: ");
	scanf("%d", &st->point.eng);
	printf("国語: ");
	scanf("%d", &st->point.ja);
	printf("数学: ");
	scanf("%d", &st->point.math);
	printf("理科: ");
	scanf("%d", &st->point.science);
	printf("社会: ");
	scanf("%d", &st->point.social);
	rewind(stdin);

	printf("\n\n");

	return;
}