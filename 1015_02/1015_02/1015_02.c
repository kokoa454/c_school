#include <stdio.h>

int main(void) {
	char moji = 'A', m_data, *m_pt;

	m_pt = &moji;
	m_data = *m_pt;

	printf("�ϐ�moji�̃A�h���X��%p, ���e��%c�ł��B\n", m_pt, m_data);

	return 0;
}