#include <stdio.h>

main() {
	int point;

	while (1) {
		printf("0`100‚Ì“_”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
		scanf("%d", &point);

		if (point >= 0 && point <= 100) {
			break;
		}
	}
	
	if (point < 60) {
		printf("•s‡Ši\n");
	}
	else {
		printf("‡Ši\n");
	}
}