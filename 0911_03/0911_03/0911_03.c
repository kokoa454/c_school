#include <stdio.h>

main() {
	int sum = 0;
	int num, i;
	
	for (i = 0; i < 10; i++) {
		printf("���l����͂��Ă�������: ");
		scanf("%d", &num);
		sum += num;

		if (sum > 100) {
			break;
		}
	}

	printf("���v��%d�ł��B\n", sum);
}