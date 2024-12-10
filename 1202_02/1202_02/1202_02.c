#include <stdio.h>

int main(void) {
	FILE* fp;

	struct Person
	{
		char name[32];
		int age;
		double height;
		char blood;
	};

	struct Person person;

	fp = fopen("–¼•ëƒŠƒXƒg.txt", "r");

	while (fscanf(fp, "%s %dYO %lfcm TYPE: %c", person.name, person.age, person.height, person.blood) != EOF) {
		printf("%s %d %3.2lf %c\n", person.name, person.age, person.height, person.blood);
	}

	fclose(fp);

	return 0;
}