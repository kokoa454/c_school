#include <stdio.h>

int main(void) {
	int s_data[4] = { 17, 24, 38, 45 };
	int* s_pt;

	s_pt = s_data;

	printf("�z���1�Ԗڂ̗v�f��%d�ł�\n", *s_pt);
	printf("�z���2�Ԗڂ̗v�f��%d�ł�\n", *(s_pt + 1));
	printf("�z���3�Ԗڂ̗v�f��%d�ł�\n", *(s_pt + 2));
	printf("�z���4�Ԗڂ̗v�f��%d�ł�\n", *(s_pt + 3));
}