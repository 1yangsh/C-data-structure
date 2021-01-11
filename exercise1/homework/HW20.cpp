#pragma warning (disable : 4996)
#include <stdio.h>
int input();
int totcalc(int);
double taxcalc(int);
void output(int, double);

int main()
{
	int time = input();
	int total = totcalc(time);
	double tax = taxcalc(total);
	output(total, tax);

	return 0;
}

int input()
{
	int time;
	printf("1주일간의 근무시간을 입력하시오 : ");
	scanf("%d", &time);
	return time;
}

int totcalc(int time)
{
	int total;
	if (time <= 40) {
		total = time * 3000;
	}
	else {
		total = (40 * 3000) + (time - 40) * 4500;
	}
	return total;
}

double taxcalc(int total)
{
	double tax;
	if (total <= 100000) {
		tax = total * 0.15;
	}
	else {
		tax = (100000 * 0.15) + (total - 100000) * 0.25;
	}
	return tax;
}

void output(int total, double tax)
{
	printf("# 총수입 : %d원\n", total);
	printf("# 세  금 : %lg원\n", tax);
	printf("# 실수입 : %lg원\n", (double)total-tax);
}