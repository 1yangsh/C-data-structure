#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int num;
	int a, tot=0;
	int i;
	for (i = 1; i < 6; ) {
		printf("0 ���� ū���� �Է��Ͻÿ�(%d ��°) : ", i);
		a = scanf("%d", &num);
		if (num > 0 && a == 1) {
			tot += num;
			i++;
		}
		else {
			;
		}
	}
	printf("�Էµ� ���� �� �� : %d\n", tot);

	return 0;
}
