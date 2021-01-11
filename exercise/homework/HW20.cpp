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
	printf("1���ϰ��� �ٹ��ð��� �Է��Ͻÿ� : ");
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
	printf("# �Ѽ��� : %d��\n", total);
	printf("# ��  �� : %lg��\n", tax);
	printf("# �Ǽ��� : %lg��\n", (double)total-tax);
}