#include <stdio.h>

main() {
	int sum = 0;
	int num, i;

	for (i = 0; i < 10; i++) {
		printf("���l����͂��Ă�������: ");
		scanf("%d", &num);

		if (num < 10) {
			continue;
		}

		sum += num;
	}

	printf("���v��%d�ł��B", sum);
}