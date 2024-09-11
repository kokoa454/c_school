#include <stdio.h>

main() {
	int sum = 0;
	int num, i;

	for (i = 0; i < 10; i++) {
		printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
		scanf("%d", &num);

		if (num < 10) {
			continue;
		}

		sum += num;
	}

	printf("‡Œv‚Í%d‚Å‚·B", sum);
}