#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int num;
	int i;
	printf("10진 정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("%d(10) = ", num);
	for (i = 31; i >= 0; --i) {
		printf("%d", (num >> i) & 1);
	}
	printf("(2)\n");
	return 0;
}