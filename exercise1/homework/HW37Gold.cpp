#pragma warning (disable : 4996)
#include <stdio.h>
int inputInt(void);
int calc(int);
void output(int, int);
void myflush(void);

int main()
{
	int day, gold;
	day = inputInt();
	gold = calc(day);
	output(day, gold);

	return 0;
}

int inputInt(void)
{
	int day, a;
	while (1) {
		printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
		a = scanf("%d", &day);
		myflush();
		if (day >= 0 && a == 1) {
			break;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}
	return day;
}

int calc(int day)
{
	int tot = 0;
	int pday = 0, gold = 1;
	int i;
	
	for (i = 0;  i < day; i++) {
		tot += gold;
		pday++;
		if (pday == gold) {
			pday = 0;
			gold++;
		}
	}
	return tot;
}

void output(int day, int gold)
{
	printf("  �ٹ��� : %d �� / �� ��ȭ �� : %d ��\n", day, gold);
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}
