#pragma warning (disable : 4996)
#include <stdio.h>
int inputNum();
int main()
{
	int n;
	n = inputNum();
	printf("입력된 값은 8 진수로 %#o 입니다.\n", n);
	printf("입력된 값은 16 진수로 %#x 입니다.\n", n);
	return 0;
}

int inputNum(void)
{
	int n;
	printf("정수값을 입력하세요 : ");
	scanf("%d", &n);
	return n;
}