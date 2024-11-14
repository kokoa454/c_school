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

	printf("¡“ú‚Ì“ú•t‚ğ“ü—Í: ");
	scanf("%d %d %d", &today.year, &today.month, &today.day);


	printf("’a¶“ú‚ğ“ü—Í: ");
	scanf("%d %d %d", &birthDay.year, &birthDay.month, &birthDay.day);

	yo = today.year - birthDay.year;

	if (today.month < birthDay.month || (today.month == birthDay.month && today.day < birthDay.day)) {
		yo--;
	}

	printf("‚ ‚È‚½‚Ì”N—î‚Í%dÎ‚Å‚·B", yo);

	return 0;
}