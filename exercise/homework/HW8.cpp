#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	int his, lit, art;
	int tot;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &his, &lit, &art);
	tot = his + lit + art;
	printf("������ %d �̰� ����� %.2lf �Դϴ�", tot, tot / 3.0);
	return 0;
}