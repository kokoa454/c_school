#include <stdio.h>

int main(void) {
	char moji = 'A', m_data, *m_pt;

	m_pt = &moji;
	m_data = *m_pt;

	printf("変数mojiのアドレスは%p, 内容は%cです。\n", m_pt, m_data);

	return 0;
}