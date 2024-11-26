#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[7] = "DRAGON";
	char str2[6] = "QUEST";
	char str3[14];
	
	/*
	int i, j;

	for (i = 0, j = 0; str1[i]; i++, j++) {
		str3[j] = str1[i];
	}

	for (i = 0; str2[i]; i++, j++) {
		str3[j] = str2[i];
	}

	str3[j] = '\0';
	printf("%s\n", str3);
	*/

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("%s\n", str3);

	return 0;
}