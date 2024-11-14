#include <stdio.h>

int main(void) {
	struct PRECIPITATION
	{
		int month;
		int milli;
	};

	struct PRECIPITATION array[] = { {1, 49},{2, 60 }, {3, 115}, {4, 130 } };

	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		printf("%dŒŽ %dmm\n", array[i].month, array[i].milli);
	}

	return 0;
}