#pragma warning (disable : 4996)
#include <stdio.h>
int input();
int yearCheck(int);
void output(int, int);

int main()
{
	int year, n;
	int i=0;
	while (i < 10) { // teat data 10�� �˻��ϱ� ���� 10�� �ݺ�
		year = input();
		n = yearCheck(year);
		output(year, n);
		i++;
	}
	
	return 0;
}

int input()
{
	int year;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d", &year);
	return year;
}

int yearCheck(int y)
{
	if (y % 4 != 0) {
		return 0;
	}
	else if (y % 100 != 0) {
		return 1;
	}
	else if (y % 400 != 0) {
		return 0;
	}
	else
		return 1;
}

void output(int year,int n)
{
	if (n == 0) {
		printf("%d���� ���(Common year)�Դϴ�.\n", year);
	}
	else {
		printf("%d���� ����(Leap year)�Դϴ�.\n", year);
	}
}