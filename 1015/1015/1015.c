#include <stdio.h>

int main(void) {
	int value, *pvalue;

	pvalue = &value;
	*pvalue = 12;

	printf("value: %d\n", value);
	printf("value: %p\n", &value);
	printf("pvalue: %p\n", pvalue);

	return 0;
}