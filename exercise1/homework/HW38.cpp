#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();

int main()
{
	int res;
	int money;
	int i, j, k;
	int a, b, c;
	
	while (1) {
		printf("���� ����� ���� �ݾ� �Է� : ");
		res = scanf("%d", &money);
		myflush();
		if ((res == 0)) {
			break;
		}
		for (i = 1; i <= money / 500; i++)
		{
			for (j = 1; j <= money / 700; j++)
			{
				for (k = 1; k <= money / 400; k++)
				{
					a = 500 * i;
					b = 700 * j;
					c = 400 * k;
					if (money - (a + b + c) == 0)
						printf("ũ����(%d��), �����(%d����), �ݶ�(%d��)\n", a / 500, b / 700, c / 400);
				}
			}
		}
		printf("��� �����Ͻðڽ��ϱ�?\n");
	}
	return 0;
}

void myflush(void)
{
	while (getchar() != '\n')
		;
}