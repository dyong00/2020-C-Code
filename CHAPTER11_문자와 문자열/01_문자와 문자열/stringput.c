#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//char *name, *dept; �� ���� : ���ڿ��� '����'�ϴ� ���̱� ����
	char name[20], dept[30];

	printf("%s", "�а� �Է�>>");
	scanf("%s", dept); //�迭��ü�� �������̹Ƿ� &�� ����ϸ� �ȵȴ�
	printf("%s", "�̸� �Է�>>");
	scanf("%s", name);
	printf("���: %10s %10s \n", dept, name);

	return 0;
}