#include <stdio.h>

int main(void) {
	char* m_pt;
	int i;

	m_pt = "lucky!";
	
	for (i = 0; m_pt[i] != '\0'; i++) {
		printf("�z���%d�Ԗڂ̗v�f��%c�ł�\n", i + 1, m_pt[i]);
	}

	return 0;
}