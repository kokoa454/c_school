#include <stdio.h>

main() {
	/*int in_data;*/

	int in_data1, in_data2, in_data3;

	printf("数字を入力してください:");
	scanf("%d %d %d", &in_data1, &in_data2, &in_data3);
	
	printf("入力した数字は%d、%d、%dです。", in_data1, in_data2, in_data3);
}