#include <stdio.h>

main() {
	int i;

	printf("�T�C�Y: ");
	scanf("%d", &i);

	for (int j = 0; j < i; j++) {
		for (int k = 0; k <= j; k++) {
			printf("$");
		}
		printf("\n");
	}
}