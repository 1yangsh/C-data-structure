#pragma  warning (disable : 4996)
#include <stdio.h>
char menu();
int inputInt(const char*);
void deposit(int *);
void withdraw(int *);
void myflush();

int main()
{
	int bal = 0;
	char m;
	printf("* 현재 잔액은 %d원 입니다.\n", bal);
	
	while (1) {
		m = menu();
		if (m == 'i') {
			deposit(&bal);
		}
		else if (m == 'o') {
			withdraw(&bal);
		}
		else if (m == 'q') {
			break;
		}
	}
	printf("* 현재 잔액은 %d원 입니다.\n", bal);
	return 0;
}

char menu(void)
{
	char menu;
	while (1) {
		printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
		scanf("%c", &menu);
		if((menu=='i')|| (menu=='o') || (menu=='q'))
		{
			myflush();
			break;
		}
		else {
			myflush();
			printf("잘못 입력하셨습니다.\n");
		}
	}
	return menu;
}

void deposit(int *bal)
{
	int money;
	money = inputInt("# 입금액을 입력하세요 : ");
	*bal += money;
	printf("* 현재 잔액은 %d원 입니다.\n", *bal);
	return;
}

void withdraw(int *bal)
{
	int money;
	
	while (1) {
		money = inputInt("# 출금액을 입력하세요 :");
		if (money > *bal) {
			printf("* 잔액이 부족합니다.\n");
		}
		else {
			*bal -= money;
			break;
		}
	}
	printf("* 현재 잔액은 %d원 입니다.\n", *bal);
}

int inputInt(const char *msg)
{
	int money;
	printf("%s", msg);
	while ((scanf("%d", &money) != 1) || (money < 0))
	{
		myflush();
		printf("잘못 입력하셨습니다. 다시 입력하세요 : ");
	}
	myflush();
	return money;
}

void myflush()
{
	while (getchar() != '\n') {
		;
	}
}