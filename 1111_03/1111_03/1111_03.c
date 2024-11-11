#include <stdio.h>

int main(void) {
	char* flowers[] = { "ROSE", "TULIP", "PANSY", "LILY", "COSMOS" };
	char* p, ** pp;

	p = flowers[1];
	printf("%s\n", p);
	p += 2;
	printf("%s\n", p);

	pp = &flowers[2];
	printf("%s\n", *pp);
	printf("%s\n", *(pp + 1));
	printf("%c\n", **pp);
	
	return 0;
}