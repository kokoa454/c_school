#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	char i_buf[4][10], name[20];
	int i, surName_cnt;

	printf("�V�Y�̎��������: ");
	scanf("%s %s", i_buf[0], i_buf[1]);
	printf("�V�w�̎��������: ");
	scanf("%s %s", i_buf[2], i_buf[3]);

	for (i = 0; i < 4; i++) {
		i_buf[i][0] = toupper(i_buf[i][0]);
	}

	surName_cnt = strlen(i_buf[0]);
	i_buf[0][surName_cnt] = ' ';
	i_buf[0][surName_cnt + 1] = '\0';

	strcpy(name, i_buf[0]);
	strcat(name, i_buf[1]);
	printf("�V�Y: %s\n", name);

	name[surName_cnt + 1] = '\0';
	strcat(name, i_buf[3]);
	printf("�V�w: %s\n", name);

	return 0;
}