#include <stdio.h>

int main(void) {
	int inputNum, i;

	printf("*�̐��F");
	scanf("%d", &inputNum);

	i = 1;

	while (i <= inputNum)
	{
		printf("*");
		i++;
	}

	printf("\n");

	return 0;
}