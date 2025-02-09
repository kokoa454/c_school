#include <stdio.h>
#include <string.h>

void setPlugBoard();
void setScrambler();
void showInfo();
void code();
void decode();
void showKeyboard(char);
void initializeSentence();
void initializeScrambler();
void rotateScrambler(char [], char []);
void rotateRotor(int*, int*, int*);
void resetRotorPosition();

char basic_alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
char plugBoard_alphabet[26];
char scrambler1_front[26] = { 'E', 'K', 'M', 'F', 'L', 'G', 'D', 'Q', 'V', 'Z', 'N', 'T', 'O', 'W', 'Y', 'H', 'X' ,'U', 'S', 'P', 'A', 'I', 'B', 'R', 'C', 'J' };
char scrambler1_back[26] = { 'B', 'D', 'F', 'H', 'J', 'L', 'C', 'P', 'R', 'T', 'X', 'V', 'Z', 'N', 'Y', 'E', 'I', 'W', 'G', 'A', 'K', 'M', 'U', 'S', 'Q', 'O' };
char scrambler2_front[26] = { 'A', 'J', 'D', 'K', 'S', 'I', 'R', 'U', 'X', 'B', 'L', 'H', 'W', 'T', 'M', 'C', 'Q', 'G', 'Z', 'N', 'P', 'Y', 'F', 'V', 'O', 'E' };
char scrambler2_back[26] = { 'E', 'J', 'M', 'Z', 'A', 'L', 'Y', 'X', 'V', 'B', 'W', 'F', 'C', 'R', 'Q', 'U', 'D', 'S', 'O', 'G', 'P', 'T', 'H', 'K', 'I', 'N' };
char scrambler3_front[26] = { 'B', 'D', 'F', 'H', 'J', 'L', 'C', 'P', 'R', 'T', 'X', 'V', 'Z', 'N', 'Y', 'E', 'I', 'W', 'G', 'A', 'K', 'M', 'U', 'S', 'Q', 'O' };
char scrambler3_back[26] = { 'E', 'K', 'M', 'F', 'L', 'G', 'D', 'Q', 'V', 'Z', 'N', 'T', 'O', 'W', 'Y', 'H', 'X' ,'U', 'S', 'P', 'A', 'I', 'B', 'R', 'C', 'J' };
char input_reflecter[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
char output_reflecter[26] = { 'Y', 'R', 'U', 'H', 'Q', 'S', 'L', 'D', 'P', 'X', 'N', 'G', 'O', 'K', 'M', 'I', 'E', 'B', 'F', 'Z', 'C', 'W', 'V', 'J', 'A', 'T' };

char input_sentence[1024];
char output_sentence[1024];

int plugBoard_num;
int scrambler_num1;
int scrambler_num2;
int scrambler_num3;
char firstScrambler_front[26];
char firstScrambler_back[26];
char secondScrambler_front[26];
char secondScrambler_back[26];
char thirdScrambler_front[26];
char thirdScrambler_back[26];

int scrambler1_pos = 0;
int scrambler2_pos = 0;
int scrambler3_pos = 0;

int main(void) {
	while (1) {
		int codeOrDecode;
		printf("1: 暗号化  2: 復号化  3: 終了 >> ");
		rewind(stdin);
		scanf("%d", &codeOrDecode);

		if (codeOrDecode != 1 && codeOrDecode != 2 && codeOrDecode != 3) {
			printf("!ERROR 不正入力!\n\n");
		}
		else {
			if (codeOrDecode == 1) {
				initializeSentence();

				setPlugBoard();

				initializeScrambler();
				setScrambler();

				showInfo();
				code();
			}
			else if (codeOrDecode == 2) {
				initializeSentence();

				setPlugBoard();

				initializeScrambler();
				setScrambler();

				showInfo();
				decode();
			}
			else {
				break;
			}
		}
	}

	return 0;
}

void setPlugBoard() {
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (i + plugBoard_num >= 26) {
			plugBoard_alphabet[i] = basic_alphabet[cnt];
			cnt++;
		}
		else {
			plugBoard_alphabet[i] = basic_alphabet[i + plugBoard_num];
		}
	}

	int plugBoard_select;
	while (1) {
		printf("交換するアルファベットの数を入力 (0 - 13) >> ");
		scanf("%d", &plugBoard_select);

		if (plugBoard_select < 0 || plugBoard_select > 13) {
			printf("!ERROR 不正入力!\n\n");
		}
		else {
			break;
		}
	}

	int used[26];
	for (int i = 0; i < 26; i++) {
		used[i] = 0;
	}

	for (int i = 0; i < plugBoard_select; i++) {
		char char1, char2;
		printf("組み合わせを選択 (例: A FはF Aに変更) >>");
		rewind(stdin);
		scanf("%c %c", &char1, &char2);

		if (char1 < 'A' || char1 > 'Z' || char2 < 'A' || char2 > 'Z') {
			printf("!ERROR 不正入力!\n\n");
			i--;
			continue;
		}

		int idx1 = char1 - 'A';
		int idx2 = char2 - 'A';

		if (used[idx1] != 0 || used[idx2] != 0) {
			printf("!ERROR 不正入力!\n\n");
			i--;
			continue;
		}

		char tmp;
		tmp = plugBoard_alphabet[idx1];
		plugBoard_alphabet[idx1] = plugBoard_alphabet[idx2];
		plugBoard_alphabet[idx2] = tmp;

		used[idx1] = 1;
		used[idx2] = 1;
	}
}

void setScrambler() {
	while (1) {
		printf("1番目のスクランブラーの順番を入力 (1 - 3) >> ");
		rewind(stdin);
		scanf("%d", &scrambler_num1);

		if (scrambler_num1 < 1 || scrambler_num1 > 3) {
			printf("!ERROR 不正入力!\n\n");
		}
		else {
			break;
		}
	}

	while (1) {
		printf("2番目のスクランブラーの順番を入力 (1 - 3) >> ");
		rewind(stdin);
		scanf("%d", &scrambler_num2);

		if ((scrambler_num2 < 1 || scrambler_num2 > 3) || scrambler_num2 == scrambler_num1) {
			printf("!ERROR 不正入力!\n\n");
		}
		else {
			break;
		}
	}

	while (1) {
		printf("3番目のスクランブラーの順番を入力 (1 - 3) >> ");
		rewind(stdin);
		scanf("%d", &scrambler_num3);

		if ((scrambler_num3 < 1 || scrambler_num3 > 3) || scrambler_num3 == scrambler_num1 || scrambler_num3 == scrambler_num2) {
			printf("!ERROR 不正入力!\n\n");
		}
		else {
			break;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (scrambler_num1 == 1) {
			firstScrambler_front[i] = scrambler1_front[i];
			firstScrambler_back[i] = scrambler1_back[i];
		}
		else if (scrambler_num1 == 2) {
			firstScrambler_front[i] = scrambler2_front[i];
			firstScrambler_back[i] = scrambler2_back[i];
		}
		else {
			firstScrambler_front[i] = scrambler3_front[i];
			firstScrambler_back[i] = scrambler3_back[i];
		}

		if (scrambler_num2 == 1) {
			secondScrambler_front[i] = scrambler1_front[i];
			secondScrambler_back[i] = scrambler1_back[i];
		}
		else if (scrambler_num2 == 2) {
			secondScrambler_front[i] = scrambler2_front[i];
			secondScrambler_back[i] = scrambler2_back[i];

		}
		else {
			secondScrambler_front[i] = scrambler3_front[i];
			secondScrambler_back[i] = scrambler3_back[i];
		}

		if (scrambler_num3 == 1) {
			thirdScrambler_front[i] = scrambler1_front[i];
			thirdScrambler_back[i] = scrambler1_back[i];
		}
		else if (scrambler_num3 == 2) {
			thirdScrambler_front[i] = scrambler2_front[i];
			thirdScrambler_back[i] = scrambler2_back[i];
		}
		else {
			thirdScrambler_front[i] = scrambler3_front[i];
			thirdScrambler_back[i] = scrambler3_back[i];
		}
	}

	return;
}

void showInfo() {
	printf("\n");
	printf("[現在のプラグボード]\n");
	for (int i = 0; i < 26; i++) {
		printf(" %c", plugBoard_alphabet[i]);
	}
	printf("\n");
	printf("[1番目のスクランブラー]\n");
	printf(" 表配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", firstScrambler_front[i]);
	}
	printf("\n");
	printf(" 裏配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", firstScrambler_back[i]);
	}
	printf("\n");
	printf("[2番目のスクランブラー]\n");
	printf(" 表配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", secondScrambler_front[i]);
	}
	printf("\n");
	printf(" 裏配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", secondScrambler_back[i]);
	}
	printf("\n");
	printf("[3番目のスクランブラー]\n");
	printf(" 表配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", thirdScrambler_front[i]);
	}
	printf("\n");
	printf(" 裏配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", thirdScrambler_back[i]);
	}
	printf("\n\n");

	return;
}

void code() {
	printf("変換する文章を入力 (1 - 1024文字) >> ");
	scanf("%s", &input_sentence);

	resetRotorPosition();

	for (int i = 0; i < strlen(input_sentence); i++) {
		int flg = 0;

		for (int j = 0; j < 26 && !flg; j++) {
			if (input_sentence[i] == plugBoard_alphabet[j]) {
				for (int k = 0; k < 26 && !flg; k++) {
					if (firstScrambler_front[j] == firstScrambler_back[k]) {
						for (int l = 0; l < 26 && !flg; l++) {
							if (secondScrambler_front[k] == secondScrambler_back[l]) {
								for (int m = 0; m < 26 && !flg; m++) {
									if (thirdScrambler_front[l] == thirdScrambler_back[m]) {
										for (int n = 0; n < 26 && !flg; n++) {
											if (input_reflecter[m] == output_reflecter[n]) {
												for (int o = 0; o < 26 && !flg; o++) {
													if (thirdScrambler_back[n] == thirdScrambler_front[o]) {
														for (int p = 0; p < 26 && !flg; p++) {
															if (secondScrambler_back[o] == secondScrambler_front[p]) {
																for (int q = 0; q < 26 && !flg; q++) {
																	if (firstScrambler_back[p] == firstScrambler_front[q]) {
																		output_sentence[i] = plugBoard_alphabet[q];
																		showKeyboard(plugBoard_alphabet[q]);
																		rotateRotor(&scrambler1_pos, &scrambler2_pos, &scrambler3_pos);
																		flg = 1;
																		break;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	printf("変換後の文章: %s\n\n", output_sentence);
	return;
}

void decode() {
	printf("変換する文章を入力 (1 - 1024文字) >> ");
	scanf("%s", &input_sentence);

	resetRotorPosition();

	for (int i = 0; i < strlen(input_sentence); i++) {
		int flg = 0;

		for (int j = 0; j < 26 && !flg; j++) {
			if (input_sentence[i] == plugBoard_alphabet[j]) {
				for (int k = 0; k < 26 && !flg; k++) {
					if (firstScrambler_front[j] == firstScrambler_back[k]) {
						for (int l = 0; l < 26 && !flg; l++) {
							if (secondScrambler_front[k] == secondScrambler_back[l]) {
								for (int m = 0; m < 26 && !flg; m++) {
									if (thirdScrambler_front[l] == thirdScrambler_back[m]) {
										for (int n = 0; n < 26 && !flg; n++) {
											if (input_reflecter[m] == output_reflecter[n]) {
												for (int o = 0; o < 26 && !flg; o++) {
													if (thirdScrambler_back[n] == thirdScrambler_front[o]) {
														for (int p = 0; p < 26 && !flg; p++) {
															if (secondScrambler_back[o] == secondScrambler_front[p]) {
																for (int q = 0; q < 26 && !flg; q++) {
																	if (firstScrambler_back[p] == firstScrambler_front[q]) {
																		output_sentence[i] = plugBoard_alphabet[q];
																		showKeyboard(plugBoard_alphabet[q]);
																		rotateRotor(&scrambler1_pos, &scrambler2_pos, &scrambler3_pos);
																		flg = 1;
																		break;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	printf("変換後の文章: %s\n\n", output_sentence);
	return;
}

void showKeyboard(char alphabet) {
	int lengthOfOutput = strlen(output_sentence);
	output_sentence[lengthOfOutput + 1] = '\0';

	printf("%s\n", output_sentence);
	printf("--------------------------------------------\n");
	printf("| Q   W   E   R   T   Z   U   I   O  |     |\n");
	printf("|   A   S   D   F   G   H   J   K    |  %c  |\n", alphabet);
	printf("| P   Y   X   C   V   B   N   M   L  |     |\n");
	printf("--------------------------------------------\n\n");
	return;
}

void initializeSentence() {
	for (int i = 0; i < 1024; i++) {
		input_sentence[i] = '\0';
		output_sentence[i] = '\0';
	}

	return;
}

void initializeScrambler() {
	for (int i = 0; i < 26; i++) {
		firstScrambler_front[i] = scrambler1_front[i];
		firstScrambler_back[i] = scrambler1_back[i];
		secondScrambler_front[i] = scrambler2_front[i];
		secondScrambler_back[i] = scrambler2_back[i];
		thirdScrambler_front[i] = scrambler3_front[i];
		thirdScrambler_back[i] = scrambler3_back[i];
	}
}

void rotateScrambler(char front[], char back[]) {
	char tmpFront = front[0];
	char tmpBack = back[0];

	for (int i = 0; i < 25; i++) {
		front[i] = front[i + 1];
		back[i] = back[i + 1];
	}

	front[25] = tmpFront;
	back[25] = tmpBack;
}

void rotateRotor(int* scrambler1_pos, int* scrambler2_pos, int* scrambler3_pos) {
	(*scrambler1_pos)++;
	rotateScrambler(firstScrambler_front, firstScrambler_back);

	if (*scrambler1_pos % 26 == 0) {
		(*scrambler2_pos)++;
		rotateScrambler(secondScrambler_front, secondScrambler_back);

		if (*scrambler2_pos % 26 == 0) {
			(*scrambler3_pos)++;
			rotateScrambler(thirdScrambler_front, thirdScrambler_back);
		}
	}
}

void resetRotorPosition() {
	scrambler1_pos = 0;
	scrambler2_pos = 0;
	scrambler3_pos = 0;
}