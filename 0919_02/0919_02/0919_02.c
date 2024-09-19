#include <stdio.h>

void subfunc(int local2);

int globalData = 100;
int local1 = 50;

int main(void) {
	int local1 = 20;
	subfunc(local1);
	local1 += 10;
	printf("%d\n", local1); //30
	printf("%d\n", globalData); //150
}

void subfunc(int local2) {
	int local3 = 50;
	globalData += 50;
	printf("%d\n", local2); //20
	printf("%d\n", local3); //50
	printf("%d\n", globalData + 100); //250
}