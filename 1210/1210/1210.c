#include <stdio.h>

typedef struct {
	int eng;
	int ja;
	int math;
	int science;
	int social;
}score;

typedef struct {
	int no;
	char name[128];
	int grade;
	char classNo;
	score point;
}student;

student school[] = {
	{1, "�l����Y", 3, 'A', {88, 66, 84, 67, 74}},
	{2, "�l����Y", 3, 'A', {88, 52, 74, 69, 60}},
	{3, "�l���O�Y", 3, 'B', {90, 51, 80, 56, 83}},
	{4, "�l���l�Y", 3, 'B', {53, 81, 64, 87, 69}},
	{5, "�l���ܘY", 3, 'C', {67, 94, 89, 66, 54}},
	{6, "�l���Z�Y", 3, 'C', {95, 88, 59, 99, 77}},
	{7, "�l�����Y", 2, 'A', {87, 98, 94, 86, 83}},
	{8, "�l�����Y", 2, 'A', {86, 64, 61, 60, 86}},
	{9, "�l����Y", 2, 'A', {87, 81, 75, 73, 95}},
	{10, "�l���\�Y", 2, 'B', {97, 93, 73, 96, 81}},
};

int main(void) {
	printf("�@�@�@�@�@�@    �@�@�@�@�@�@�@�@�@�@|�@�@�@�@�@�@�@�_��\n");
	printf("�w�Дԍ�	�����@�w�N�@�N���X�@|�@�p��@����@���w�@���ȁ@�Љ�\n");
	
	for (int i = 0; i < 10; i++) {
		printf("%8d�@%10s�@%4d�@%5c �@|�@%4d�@%4d�@%4d�@%4d�@%4d\n", school[i].no, school[i].name, school[i].grade, school[i].classNo, school[i].point.eng, school[i].point.ja, school[i].point.math, school[i].point.science, school[i].point.social);
	}

	return 0;
}