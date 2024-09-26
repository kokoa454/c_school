#include <stdio.h>

int main(void) {
	char alpha[4] = "ABC";
	int i = 0;

	while (alpha[i] != '\0') {
		printf("•¶š%c‚Ì•¶šƒR[ƒh‚Í%02x‚Å‚·\n", alpha[i], alpha[i]);
		i++;
	}

	return 0;
}