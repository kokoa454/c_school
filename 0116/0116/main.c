#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initializeNumber();
int getRandom(int, int);
void getUsrNumAndType();
void showUsrNumAndType();
void getDlrNumAndType();
void showDlrNumAndType();
void getHit();

int clover[13][2];
int spade[13][2];
int heart[13][2];
int diamond[13][2];

int usr_cnt;
int dlr_cnt;
int usr_slotNum[128];
char usr_slotType[128];
int dlr_slotNum[128];
char dlr_slotType[128];

int main(void) {
	srand((unsigned int)time(NULL));

	int cnt = 0;
	char yORn;
	int cntUsrWin = 0;
	int cntDraw = 0;
	int cntDlrWin = 0;

	while (1) {
		printf("ゲームを開始しますか？ (y/n): ");
		scanf("%c", &yORn);
		rewind(stdin);

		if (yORn != 'y' && yORn != 'n') {
			printf("不正な入力です\n");
		}
		else if(yORn == 'y') {
			initializeNumber();
			
			printf("現在%d戦目です\n", cnt + 1);
			printf("これまでの結果: プレイヤー%d勝　ディーラー%d勝　引き分け%d回\n", cntUsrWin, cntDlrWin, cntDraw);

			while (usr_cnt != 2) {
				getUsrNumAndType();
			}

			showUsrNumAndType();

			while (dlr_cnt != 2) {
				getDlrNumAndType();
			}

			showDlrNumAndType();

			getHit();
		}
		else if(yORn == 'n') {
			break;
		}
	}

	return 0;
}

void initializeNumber(void) {
	usr_cnt = 0;
	dlr_cnt = 0;

	for (int i = 0; i < 13; i++) {
		if (i + 1 < 11) {
			clover[i][0] = i + 1;
			spade[i][0] = i + 1;
			heart[i][0] = i + 1;
			diamond[i][0] = i + 1;
		}
		else {
			clover[i][0] = 10;
			spade[i][0] = 10;
			heart[i][0] = 10;
			diamond[i][0] = 10;
		}

		clover[i][1] = 0;
		spade[i][1] = 0;
		heart[i][1] = 0;
		diamond[i][1] = 0;
	}

	for (int i = 0; i < 128; i++) {
		usr_slotNum[i] = NULL;
		usr_slotType[i] = '\0';

		dlr_slotNum[i] = NULL;
		dlr_slotType[i] = '\0';
	}
}

int getRandom(int min, int max) {
	return min + (rand() % (max - min + 1));
}

void getUsrNumAndType() {
	int type = getRandom(0, 3);
	int num = getRandom(0, 12);

	switch (type) {
	case 0:
		if (clover[num][1] == 0) {
			usr_slotNum[usr_cnt] = clover[num][0];
			usr_slotType[usr_cnt] = 'c';

			clover[num][1] = 1;

			usr_cnt++;
		}

		break;

	case 1:
		if (spade[num][1] == 0) {
			usr_slotNum[usr_cnt] = spade[num][0];
			usr_slotType[usr_cnt] = 's';

			spade[num][1] = 1;

			usr_cnt++;
		}

		break;

	case 2:
		if (heart[num][1] == 0) {
			usr_slotNum[usr_cnt] = heart[num][0];
			usr_slotType[usr_cnt] = 'h';

			heart[num][1] = 1;

			usr_cnt++;
		}

		break;

	case 3:
		if (diamond[num][1] == 0) {
			usr_slotNum[usr_cnt] = diamond[num][0];
			usr_slotType[usr_cnt] = 'd';

			diamond[num][1] = 1;

			usr_cnt++;
		}

		break;
	}

	if (num == 1 && usr_cnt > 2) {
		//printf() ここから
	}
}

void showUsrNumAndType() {
	printf("プレイヤー: ");

	for (int i = 0; i < usr_cnt; i++) {
		printf("%d:%c ", usr_slotNum[i], usr_slotType[i]);
	}

	printf("\n");
}

void getDlrNumAndType() {
	int type = getRandom(0, 3);
	int num = getRandom(0, 12);

	switch (type) {
	case 0:
		if (clover[num][1] == 0) {
			dlr_slotNum[dlr_cnt] = clover[num][0];
			dlr_slotType[dlr_cnt] = 'c';

			clover[num][1] = 1;

			dlr_cnt++;
		}

		break;

	case 1:
		if (spade[num][1] == 0) {
			dlr_slotNum[dlr_cnt] = spade[num][0];
			dlr_slotType[dlr_cnt] = 's';

			spade[num][1] = 1;

			dlr_cnt++;
		}

		break;

	case 2:
		if (heart[num][1] == 0) {
			dlr_slotNum[dlr_cnt] = heart[num][0];
			dlr_slotType[dlr_cnt] = 'h';

			heart[num][1] = 1;

			dlr_cnt++;
		}

		break;

	case 3:
		if (diamond[num][1] == 0) {
			dlr_slotNum[dlr_cnt] = diamond[num][0];
			dlr_slotType[dlr_cnt] = 'd';

			diamond[num][1] = 1;

			dlr_cnt++;
		}

		break;
	}
}

void showDlrNumAndType() {
	printf("ディーラー: ");

	for (int i = 0; i < dlr_cnt; i++) {
		printf("%d:%c ", dlr_slotNum[i], dlr_slotType[i]);
	}

	printf("\n");
}

void getHit() {
	char hORs;

	while (1) {
		printf("行動を選択 (h/s): ");
		scanf("%c", &hORs);
		rewind(stdin);

		if (hORs != 'h' && hORs != 's') {
			printf("不正な入力です\n");
		}
		else if (hORs == 'h') {
			getUsrNumAndType();
			showUsrNumAndType();
			break;
		}
		else if (hORs == 's') {
			break;
		}
	}
}