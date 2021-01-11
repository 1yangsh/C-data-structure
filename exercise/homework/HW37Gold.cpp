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
		printf("* 기사의 근무일수를 입력하시오 : ");
		a = scanf("%d", &day);
		myflush();
		if (day >= 0 && a == 1) {
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
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
	printf("  근무일 : %d 일 / 총 금화 수 : %d 개\n", day, gold);
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}
