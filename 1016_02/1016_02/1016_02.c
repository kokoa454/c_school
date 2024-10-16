#include <stdio.h>

int main(void) {
	int s_data[4] = { 17, 24, 38, 45 };
	int* s_pt;

	s_pt = s_data;

	printf("”z—ñ‚Ì1”Ô–Ú‚Ì—v‘f‚Í%d‚Å‚·\n", *s_pt);
	printf("”z—ñ‚Ì2”Ô–Ú‚Ì—v‘f‚Í%d‚Å‚·\n", *(s_pt + 1));
	printf("”z—ñ‚Ì3”Ô–Ú‚Ì—v‘f‚Í%d‚Å‚·\n", *(s_pt + 2));
	printf("”z—ñ‚Ì4”Ô–Ú‚Ì—v‘f‚Í%d‚Å‚·\n", *(s_pt + 3));
}