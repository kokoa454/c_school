#include <stdio.h>

void print(char**, int);

int main(void) {
	char* msg[] = { "This", "is", "a", "Pen." };
	int msgCnt = 4;

	print(msg, msgCnt);
	return 0;
}

void print(char** p_msg, int msg_num) {
	int i;

	for (i = 0; i < 4; i++) {
		printf("%s ", p_msg[i]);
	}
}