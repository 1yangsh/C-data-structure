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
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n", bal);
	
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
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n", bal);
	return 0;
}

char menu(void)
{
	char menu;
	while (1) {
		printf("# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
		scanf("%c", &menu);
		if((menu=='i')|| (menu=='o') || (menu=='q'))
		{
			myflush();
			break;
		}
		else {
			myflush();
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}
	return menu;
}

void deposit(int *bal)
{
	int money;
	money = inputInt("# �Աݾ��� �Է��ϼ��� : ");
	*bal += money;
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n", *bal);
	return;
}

void withdraw(int *bal)
{
	int money;
	
	while (1) {
		money = inputInt("# ��ݾ��� �Է��ϼ��� :");
		if (money > *bal) {
			printf("* �ܾ��� �����մϴ�.\n");
		}
		else {
			*bal -= money;
			break;
		}
	}
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n", *bal);
}

int inputInt(const char *msg)
{
	int money;
	printf("%s", msg);
	while ((scanf("%d", &money) != 1) || (money < 0))
	{
		myflush();
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ��� : ");
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