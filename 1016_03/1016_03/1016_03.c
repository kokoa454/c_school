#include <stdio.h>

int main(void) {
	char str[] = "hello world";
	char* str_pt;

	str_pt = str;

	*str_pt -= 32;
	*(str_pt + 6) -= 32;

	printf("%s\n", str);

	return 0;
}