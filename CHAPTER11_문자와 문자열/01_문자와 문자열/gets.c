#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char line[101]; //char *line; 는 오류 : 문자열을 '저장'하는 것이기 때문

	printf("입력을 종료하여면 새로운 행에서 ctrl+Z 를 누르십시오. \n");
	while (gets(line)) {
		puts(line);
	}
	printf("\n");

	while (gets_s(line, 101)) {
		puts(line);
	}
	printf("\n");

	return 0;
}