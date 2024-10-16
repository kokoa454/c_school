#include <stdio.h>

int main(void) {
	char str[] = "hello world";
	char* str_pt;

	str_pt = str;

	*str_pt = 'H';
	*(str_pt + 6) = 'W';

	printf("%s\n", str);

	return 0;
}