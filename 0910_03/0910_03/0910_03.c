#include <stdio.h>

main() {
	int i, j;
	int sum = 0;
	int avr = 0;

	for (i = 0; i < 5; i++) {
		printf("®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
		scanf("%d", &j);
		sum = sum + j;
	}
	avr = sum / i;

	printf("•½‹Ï‚Í%d\n", avr);
}