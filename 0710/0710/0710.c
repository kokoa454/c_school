#include <stdio.h>

int main(void) {
	int payment;
	char discount;

	printf("x•¥‹àŠz‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d", &payment);
	printf("Š„ˆøŒ”‚Í‚ ‚è‚Ü‚·‚©iY/NjF");
	rewind(stdin);
	scanf("%c", &discount);

	if (discount == 'Y') {
		printf("x•¥‹àŠz‚Í%d‰~‚Å‚·B\n", payment - 100);
	}
	else {
		printf("x•¥‹àŠz‚Í%d‰~‚Å‚·B\n", payment);
	}
}