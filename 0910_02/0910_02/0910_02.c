#include <stdio.h>

main() {
	int i;
	int j = 1;

	for (i = 1; i < 11; i++) {
		j = j * 2;
		printf("2��%d�� = %d\n", i, j);
	}
}