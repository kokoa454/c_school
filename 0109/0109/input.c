#include <stdio.h>
#include "studentdata.h"

void input(student* st) {
	printf("学籍番号 = ");
	scanf("%d", &st->no);
	printf("氏名 = ");
	scanf("%s", &st->name);
	printf("学年 = ");
	scanf("%d", &st->grade);
	rewind(stdin);
	printf("クラス = ");
	scanf("%c", &st->classNo);
	printf("\n");
	printf("点数\n");
	printf("英語: ");
	scanf("%d", &st->point.eng);
	printf("国語: ");
	scanf("%d", &st->point.ja);
	printf("数学: ");
	scanf("%d", &st->point.math);
	printf("理科: ");
	scanf("%d", &st->point.science);
	printf("社会: ");
	scanf("%d", &st->point.social);
	rewind(stdin);

	printf("\n\n");

	return;
}