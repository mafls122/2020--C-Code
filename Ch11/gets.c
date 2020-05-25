#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char line[101];

	printf("입력을종료하려면새로운행에서ctrl + Z)를누르십시오 \n");
	while (gets(line))
		puts(line);
	printf("\n");

	while (gets_s(line, 101))
		puts(line);
	printf("\n");

	return 0;
}
