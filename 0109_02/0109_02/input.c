#include <stdio.h>
#include "studentdata.h"

void input(student* st) {
	printf("�w�Дԍ� = ");
	scanf("%d", &st->no);
	printf("���� = ");
	scanf("%s", &st->name);
	printf("�w�N = ");
	scanf("%d", &st->grade);
	rewind(stdin);
	printf("�N���X = ");
	scanf("%c", &st->classNo);
	printf("\n");
	printf("�_��\n");
	printf("�p��: ");
	scanf("%d", &st->point.eng);
	printf("����: ");
	scanf("%d", &st->point.ja);
	printf("���w: ");
	scanf("%d", &st->point.math);
	printf("����: ");
	scanf("%d", &st->point.science);
	printf("�Љ�: ");
	scanf("%d", &st->point.social);
	rewind(stdin);

	printf("\n\n");

	return;
}