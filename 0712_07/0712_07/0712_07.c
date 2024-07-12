#include  <stdio.h>

int main(void) {
	int num1, num2;
	int calNum;

	printf("1‚Â–Ú‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d", &num1);
	printf("2‚Â–Ú‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d", &num2);
	printf("1`4‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d", &calNum);

	switch (calNum) {
	case 1:
		printf("%d+%d=%d‚Å‚·\n", num1, num2, num1 + num2);
		break;

	case 2:
		if (num1 >= num2) {
			printf("%d-%d=%d‚Å‚·\n", num1, num2, num1 - num2);
		}
		else {
			printf("%d-%d=%d‚Å‚·\n", num2, num1, num2 - num1);
		}

		break;

	case 3:
		printf("%d*%d=%d‚Å‚·\n", num1, num2, num1 * num2);
		break;

	case 4:
		if (num1 >= num2) {
			printf("%d€%d=%d‚Å‚·\n", num1, num2, num1 / num2);
		}
		else {
			printf("%d€%d=%d‚Å‚·\n", num2, num1, num2 / num1);
		}

		break;

	default:
		printf("y“ü—Íƒ~ƒXz1`4‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	}

	return 0;
}