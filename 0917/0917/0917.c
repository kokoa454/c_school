#include <stdio.h>

main() {
	char c1 = 'A';
	char c2 = 122;

	printf("変換前 : %c → 変換後 : %c\n", c1, c1 + 32);
	printf("変換前 : %c → 変換後 : %c\n", c2, c2 - 32);
}