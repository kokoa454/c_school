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

	printf("****************成績票****************\n");

	for (; ;) {
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