#ifndef STUDENTDATA_H
#define STUDENTDATA_H

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

void show_header();
void show(student*);
void input(student*);
void save(student*, int*);
void read(student*, int*);
void initialize(student*, int*);
void delete(student*, int*);
void sortByGrade(student*, int*);
void sortById(student*, int*);
void showHighestAndLowestPoints(student*, int*);

#endif