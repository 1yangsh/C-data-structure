#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int n1, n2;
	printf("# �ΰ��� ������ �Է��ϼ��� : ");
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
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
	}
	return 0;
}