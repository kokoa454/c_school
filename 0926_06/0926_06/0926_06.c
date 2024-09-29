#include <stdio.h>
int data[10];

int sortNum(int x);
int searchNum(int x, int y);

int main(void) {
	int x;
	int y;

	printf("データ数: ");
	scanf("%d", &x);

	if (x < 1 || x > 10) {
		printf("\n\n!!!ERROR!!!\n");
		return 0;
	}

	sortNum(x);

	printf("***ソート済みデータ(降順)***\n");

	for (int i = 0; i < x; i++) {
		printf("%dつ目の点数: %d\n", i + 1, data[i]);
	}
	
	printf("***2分探索法によるデータ探索***\n");

	printf("探索データ: ");
	scanf("%d", &y);

	searchNum(x, y);

	return 0;
}

int sortNum(int x) {
	for (int i = 0; i < x; i++) {
		printf("%dつ目の点数: ", i + 1);
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < x; i++) {
		for (int j = x - 1; j > i; j--) {
			if (data[j - 1] < data[j]) {
				int w = data[j - 1];
				data[j - 1] = data[j];
				data[j] = w;
			}
		}
	}

	return 0;
}

int searchNum(int x, int y) {
	int start = 0;
	int end = x - 1;

	while (start <= end) {
		int center = (start + end) / 2;
		
		if (data[center] == y) {
			printf("探索データは%dつ目のデータです。", center + 1);
			return 0;
		}
		else {
			if (data[center] < y) {
				end = center - 1;
			}
			else {
				start = center + 1;
			}
		}
	}

	printf("探索データは見つかりませんでした。\n");

	return 0;
}