#include <stdio.h>

main() {
	int length;
	int flg = 1;

	while (flg) {
		printf("•Ó‚Ì’·‚³(2`9)‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
		scanf("%d", &length);

		if (length >= 2 && length <= 9) {
			for (int i = 0; i < length; i++) {
				if (i == 0 || i == length - 1) {
					for (int j = 0; j < length; j++) {
						printf("* ");
					}
					printf("\n");
				}
				else {
					printf("* ");

					if (length - 2 > 0) {
						for (int k = 0; k < (length - 2) * 2; k++) {
							printf(" ");
						}
					}
					printf("* ");
					printf("\n");
				}

				flg = 0;
			}
		}
	}
}