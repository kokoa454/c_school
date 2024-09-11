#include <stdio.h>

main() {
	int sum = 0;
	int num, i;
	
	for (i = 0; i < 10; i++) {
		printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
		scanf("%d", &num);
		sum += num;

		if (sum > 100) {
			break;
		}
	}

	printf("‡Œv‚Í%d‚Å‚·B\n", sum);
}