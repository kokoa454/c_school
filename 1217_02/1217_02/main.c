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

	printf("****************成績票****************\n");

	for (; ;) {
		flg = 0;

		printf("機能を選択してください\n");
		printf("1: 成績表示\n");
		printf("2: データ入力\n");
		printf("3: ファイルに出力\n");
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
		else if (inputNum == 3) {
			if (cnt <= 0) {
				printf("!ERROR: データを1つ以上入力してください!\n\n");
			}
			else {
				file_p = fopen("成績表.txt", "w+");
				if (file_p == NULL){
					printf("!ERROR: ファイルが開けません!\n\n");
					exit(EXIT_FAILURE);
				}

				for (int i = 0; i < cnt; i++) {
					fprintf(file_p, "%d %s %d %c %d %d %d %d %d\n", st[i].no, st[i].name, st[i].grade, st[i].classNo, st[i].point.eng, st[i].point.ja, st[i].point.math, st[i].point.science, st[i].point.social);
				}

				if (fclose(file_p) == EOF) {
					printf("!ERROR: ファイルを閉じれません!\n\n");
					exit(EXIT_FAILURE);
				}
				
				printf("ファイルへの保存完了\n");
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