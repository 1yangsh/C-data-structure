#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int n1, n2;
	printf("# 두개의 정수를 입력하세요 : ");
	while (scanf("%d %d", &n1, &n2) == 2) {
		if (n1 >= n2) {
			printf("%d - %d = %d\n", n1, n2, n1 - n2);
		}
		else if (n1 < n2) {
			printf("%d - %d = %d\n", n2, n1, n2 - n1);
		}
		else {
			;
		}
		printf("# 두개의 정수를 입력하세요 : ");
	}
	return 0;
}