#include <stdio.h>

int main(void) {
	int s_data[4] = { 17, 24, 38, 45 };
	int* s_pt;

	s_pt = s_data;

	printf("配列の1番目の要素は%dです\n", *s_pt);
	printf("配列の2番目の要素は%dです\n", *(s_pt + 1));
	printf("配列の3番目の要素は%dです\n", *(s_pt + 2));
	printf("配列の4番目の要素は%dです\n", *(s_pt + 3));
}