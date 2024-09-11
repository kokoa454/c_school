#include <stdio.h>

main() {
	for (int i = 1; i < 10; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d\n", i);
	}
}