#include <stdio.h>

main() {
	int i, j;
	int sum = 0;
	int avr = 0;

	for (i = 0; i < 5; i++) {
		printf("��������͂��Ă�������: ");
		scanf("%d", &j);
		sum = sum + j;
	}
	avr = sum / i;

	printf("���ς�%d\n", avr);
}