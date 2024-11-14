#include <stdio.h>

struct Position
{
	double latitude;
	double longitude;
};

int main(void) {
	/*struct Position pos = {35.41, 139.45};

	printf("“Œ‹ ¨ %f, %f", pos.latitude, pos.longitude);
	printf("\n");

	*/

	/*
	struct Position pos [] = {{35.41, 139.45}, {34.41, 135.29}};

	printf("“Œ‹ ¨ %f, %f\n", pos[0].latitude, pos[0].longitude);
	printf("‘åã ¨ %f, %f\n", pos[1].latitude, pos[1].longitude);

	*/

	struct Position pos[] = { {35.41, 139.45}, {34.41, 135.29}, {137.72, 34.71} };

	printf("“Œ‹ ¨ %f, %f\n", pos[0].latitude, pos[0].longitude);
	printf("‘åã ¨ %f, %f\n", pos[1].latitude, pos[1].longitude);
	printf("•l¼ ¨ %f, %f\n", pos[2].latitude, pos[2].longitude);

	return 0;
}