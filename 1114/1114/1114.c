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

	printf("今日の日付を入力: ");
	scanf("%d %d %d", &today.year, &today.month, &today.day);


	printf("誕生日を入力: ");
	scanf("%d %d %d", &birthDay.year, &birthDay.month, &birthDay.day);

	yo = today.year - birthDay.year;

	if (today.month < birthDay.month || (today.month == birthDay.month && today.day < birthDay.day)) {
		yo--;
	}

	printf("あなたの年齢は%d歳です。", yo);

	return 0;
}