#pragma warning (disable : 4996)
#include <stdio.h>

int input();
int main()
{
	int star, i=1;
	star = input();
	while (i <= star)
	{
		if (i % 5 != 0) {
			printf("*");
		}
		else {
			printf("*\n");
		}
		i++;
	}
	return 0;
}

int input(void)
{
	int n;
	printf("# �������� �Է��ϼ��� : ");
	scanf("%d", &n);
	return n;
}