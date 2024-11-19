#include <stdio.h>

int main(void) {
	struct exam_format {
		char* name;
		int eng;
		int ja;
	};

	struct exam_format students[] = { {"Ando", 65, 70},
									 {"Imai", 80, 78},
									 {"Ueno", 90, 58},
									 {"Endo", 59, 66},
									 {"Ono", 72, 91} };

	struct exam_format* s_pt;
	int i, sum, eng_sum = 0, ja_sum = 0;
	s_pt = students;

	for (i = 0; i < 5; i++) {
		sum = s_pt->eng + s_pt->ja;
		eng_sum += s_pt->eng;
		ja_sum += s_pt->ja;
		printf("%sさん　合計: %d\n", s_pt->name, sum);
		s_pt++;
	}

	printf("\n\n英語　合計: %d\n国語　合計: %d\n", eng_sum, ja_sum);
	return 0;
}