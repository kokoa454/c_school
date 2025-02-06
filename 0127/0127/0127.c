#include <stdio.h>
#include <string.h>

void code();
void showKeyboard(char);
void decode();
void initialize();

char basic_alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
char plugBoard_alphabet[26];
char scrambler1_front[26] = { 'E', 'K', 'M', 'F', 'L', 'G', 'D', 'Q', 'V', 'Z', 'N', 'T', 'O', 'W', 'Y', 'H', 'X' ,'U', 'S', 'P', 'A', 'I', 'B', 'R', 'C', 'J' };
char scrambler1_back[26] = { 'B', 'D', 'F', 'H', 'J', 'L', 'C', 'P', 'R', 'T', 'X', 'V', 'Z', 'N', 'Y', 'E', 'I', 'W', 'G', 'A', 'K', 'M', 'U', 'S', 'Q', 'O' };
char scrambler2_front[26] = { 'A', 'J', 'D', 'K', 'S', 'I', 'R', 'U', 'X', 'B', 'L', 'H', 'W', 'T', 'M', 'C', 'Q', 'G', 'Z', 'N', 'P', 'Y', 'F', 'V', 'O', 'E' };
char scrambler2_back[26] = { 'E', 'J', 'M', 'Z', 'A', 'L', 'Y', 'X', 'V', 'B', 'W', 'F', 'C', 'R', 'Q', 'U', 'D', 'S', 'O', 'G', 'P', 'T', 'H', 'K', 'I', 'N' };
char scrambler3_front[26] = { 'B', 'D', 'F', 'H', 'J', 'L', 'C', 'P', 'R', 'T', 'X', 'V', 'Z', 'N', 'Y', 'E', 'I', 'W', 'G', 'A', 'K', 'M', 'U', 'S', 'Q', 'O' };
char scrambler3_back[26] = { 'E', 'K', 'M', 'F', 'L', 'G', 'D', 'Q', 'V', 'Z', 'N', 'T', 'O', 'W', 'Y', 'H', 'X' ,'U', 'S', 'P', 'A', 'I', 'B', 'R', 'C', 'J' };
char input_reflecter[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
char output_reflecter[26] = { 'E', 'J', 'M', 'Z', 'A', 'L', 'Y', 'X', 'V', 'B', 'W', 'F', 'C', 'R', 'Q', 'U', 'D', 'S', 'O', 'G', 'P', 'T', 'H', 'K', 'I', 'N' };

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

int main(void) {
	while (1) {
		printf("プラグボードの番号を入力 (0 - 25) >> ");
		rewind(stdin);
		scanf("%d", &plugBoard_num);

		if (plugBoard_num < 0 || plugBoard_num > 25) {
			printf("!ERROR 不正入力!\n\n");
		}
		else {
			break;
		}
	}
	
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

	printf("\n");
	printf("[現在のプラグボード]\n");
	for (int i = 0; i < 26; i++) {
		printf(" %c", plugBoard_alphabet[i]);
	}
	printf("\n");
	printf("[1番目のスクランブラー]\n");
	printf("表配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", firstScrambler_front[i]);
	}
	printf("\n");
	printf("裏配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", firstScrambler_back[i]);
	}
	printf("\n");
	printf("[2番目のスクランブラー]\n");
	printf("表配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", secondScrambler_front[i]);
	}
	printf("\n");
	printf("裏配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", secondScrambler_back[i]);
	}
	printf("\n");
	printf("[3番目のスクランブラー]\n");
	printf("表配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", thirdScrambler_front[i]);
	}
	printf("\n");
	printf("裏配線:");
	for (int i = 0; i < 26; i++) {
		printf(" %c", thirdScrambler_back[i]);
	}
	printf("\n\n");

	while (1) {
		initialize();
		int codeOrDecode;
		printf("1: 暗号化  2: 復号化  3: 終了 >> ");
		rewind(stdin);
		scanf("%d", &codeOrDecode);
		printf("\n\n");

		if (codeOrDecode != 1 && codeOrDecode != 2 && codeOrDecode != 3) {
			printf("!ERROR 不正入力!\n\n");
		}
		else {
			if (codeOrDecode == 1) {
				code();
			}
			else if (codeOrDecode == 2) {
				decode();
			}
			else {
				break;
			}
		}
	}

	return 0;
}

void code() {
	printf("変換する文章を入力 (1 - 1024文字) >> ");
	scanf("%s", &input_sentence);

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
}

void decode() { //復号にバグあり
	printf("変換する文章を入力 (1 - 1024文字) >> ");
	scanf("%s", &input_sentence);

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
}

void initialize() {
	for (int i = 0; i < 1024; i++) {
		input_sentence[i] = '\0';
		output_sentence[i] = '\0';
	}
}