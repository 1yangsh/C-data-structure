#pragma warning (disable : 4996)
#include <stdio.h>
double input(void);
void output(double);

int main()
{
	double f, c;
	f = input();
	c = 5.0 / 9 * (f - 32);
	output(c);

	return 0;
}

double input(void)
{
	double f;
	printf("���� �µ��� �Է��ϼ��� : ");
	scanf("%lf", &f);
	return f;
}

void output(double c)
{
	printf("���� �µ��� %.1lf �� �Դϴ�.", c);
}