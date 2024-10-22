#include <stdio.h>

void koukan(int*, int*);

int main(void) {
	int data_1 = 100, data_2 = 200;
	printf("1度目の出力: data_1 = %d, data_2 = %d", data_1, data_2);
	koukan(&data_1, &data_2);
	printf("2度目の出力: data_1 = %d, data_2 = %d", data_1, data_2);

	return 0;
}

void koukan(int* pt_1, int* pt_2) {
	int w_data;
	w_data = *pt_1;
	*pt_1 = *pt_2;
	*pt_2 = w_data;
}