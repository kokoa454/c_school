#include <stdio.h>

int tri(int x, int y);

int main(void) {
	int side, high, area;

	printf("���: ");
	scanf("%d", &side);
	printf("����: ");
	scanf("%d", &high);
	area = tri(side, high);

	printf("�ʐ� = %d\n", area);

	return 0;
}

int tri(int x, int y) {
	return (x * y) / 2;
}