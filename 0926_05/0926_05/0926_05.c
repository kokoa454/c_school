#include <stdio.h>

int main(void) {
	int data[10];
	int x;

	printf("データ数: ");
	scanf("%d", &x);

	if (x > 10) {
		printf("\n\n!!!ERROR!!!\n");
		return 0;
	}

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

	printf("***ソート済みデータ(降順)***\n");

	for (int i = 0; i < x; i++) {
		printf("%dつ目の点数: %d\n", i + 1, data[i]);
	}

	return 0;
}