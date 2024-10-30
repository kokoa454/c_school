#include <stdio.h>
#include <string.h>

void printfText(char[][10], int);

int main(void) {
	char msg[4][10];
	int msgCnt = 4;

	strcpy(msg[0], "Happy");
	strcpy(msg[1], "Birthday");
	strcpy(msg[2], "To");
	strcpy(msg[3], "You!");

	printfText(msg, msgCnt);

	return 0;
}

void printfText(char word[][10], int wordCnt) {
	int i;

	for (i = 0; i < wordCnt; i++) {
		printf("%s ", word[i]);
	}

	return;
}