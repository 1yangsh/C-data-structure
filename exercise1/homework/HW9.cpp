#pragma warning (disable : 4996)
#include <stdio.h>
int inputNum();
int main()
{
	int n;
	n = inputNum();
	printf("�Էµ� ���� 8 ������ %#o �Դϴ�.\n", n);
	printf("�Էµ� ���� 16 ������ %#x �Դϴ�.\n", n);
	return 0;
}

int inputNum(void)
{
	int n;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &n);
	return n;
}