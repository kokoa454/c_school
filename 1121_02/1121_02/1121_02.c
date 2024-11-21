#include <stdio.h>

int main(void) {
	struct FamilyData{
		char* name;
		int age;
		struct FamilyData* Data_pt;
	};

	struct FamilyData father = { "Naoki", 58 };
	struct FamilyData mother = { "Naomi", 56 };
	struct FamilyData oldSister = { "Saeko", 25 };
	struct FamilyData* Data_top, * w_pt;

	Data_top = &father;
	father.Data_pt = &mother;
	mother.Data_pt = &oldSister;
	oldSister.Data_pt = NULL;

	w_pt = Data_top;

	while (w_pt != NULL) {
		printf("%s‚³‚ñ@”N—î: %d\n", w_pt->name, w_pt->age);
		w_pt = w_pt->Data_pt;
	}

	return 0;
}