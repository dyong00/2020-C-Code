#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//char *name, *dept; 는 오류 : 문자열을 '저장'하는 것이기 때문
	char name[20], dept[30];

	printf("%s", "학과 입력>>");
	scanf("%s", dept); //배열자체가 포인터이므로 &를 사용하면 안된다
	printf("%s", "이름 입력>>");
	scanf("%s", name);
	printf("출력: %10s %10s \n", dept, name);

	return 0;
}