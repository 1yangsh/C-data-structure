#pragma warning (disable : 4996)
#include <stdio.h>
double input();
void output(double, double);

int main()
{
	double elec;
	int bfare=660;
	double kwfare = 88.5;
	double totfare, tax;
	elec = input();
	totfare = (double)bfare + (elec * kwfare);
	tax = totfare * 0.09;

	output(totfare, tax);

	return 0;
}

double input(void)
{
	double elec;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%lf", &elec);
	return elec;
}

void output(double tot, double tax)
{
	printf("전기 사용요금은 %lf 원 입니다.", tot + tax);
}