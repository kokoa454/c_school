#include <stdio.h>

int main(void) {
	struct date
	{
		int year;
		int month;
		int day;
	};

	struct date birthDay, today;
	int yo;

	printf("�����̓��t�����: ");
	scanf("%d %d %d", &today.year, &today.month, &today.day);


	printf("�a���������: ");
	scanf("%d %d %d", &birthDay.year, &birthDay.month, &birthDay.day);

	yo = today.year - birthDay.year;

	if (today.month < birthDay.month || (today.month == birthDay.month && today.day < birthDay.day)) {
		yo--;
	}

	printf("���Ȃ��̔N���%d�΂ł��B", yo);

	return 0;
}