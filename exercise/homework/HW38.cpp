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
		printf("현재 당신의 소유 금액 입력 : ");
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
						printf("크림빵(%d개), 새우깡(%d봉지), 콜라(%d병)\n", a / 500, b / 700, c / 400);
				}
			}
		}
		printf("어떻게 구입하시겠습니까?\n");
	}
	return 0;
}

void myflush(void)
{
	while (getchar() != '\n')
		;
}