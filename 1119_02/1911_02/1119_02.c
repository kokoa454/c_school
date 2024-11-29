#include <stdio.h>

struct Point mul2(struct Point);

struct Point {
	int x;
	int y;
};

int main(void) {
	struct Point p;
	p.x = 12;
	p.y = 7;
	p = mul2(p);
	printf("x = %d, y = %d", p.x, p.y);
	return 0;
}

struct Point mul2(struct Point pnt) {
	pnt.x *= 2;
	pnt.y *= 2;
	return pnt;
}