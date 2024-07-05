#include <stdio.h>

main() {
	int a, b;

	printf("変数aに数値を入力してください：");
	scanf("%d", &a);

	printf("変数bに数値を入力してください：");
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
}