#include <stdio.h>

int main(void) {
	int s_data[4] = { 17, 24, 38, 45 }, * s_pt;
	int i;

	s_pt = s_data;

	for (i = 0; i < 4; i++) {
		printf("配列の%d番目の要素は%dです\n", i + 1, s_pt[i]);
	}

	return 0;
}