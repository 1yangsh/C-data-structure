#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i = 1;
	double height, total=0;
	while (i < 6) {
		printf("%d�� �л��� Ű��? ", i);
		scanf("%lf", &height);
		total += height;
		i++;
	}
	printf("�ټ� ���� ��� Ű�� %.1lf �Դϴ�.\n", total/5);

	return 0;
}