#pragma warning (disable : 4996)
#include <stdio.h>
double input1(void);
double input2(void);
void output(double, int, int, double);

int main()
{
	double dis, sph;
	int hour, min;
	double sec;
	dis = input1();
	sph = input2();
	hour = dis / sph;
	min = ((dis / sph) - hour) * 60;
	sec = ((((dis / sph) - hour) * 60) - min ) * 60;
	output(dis, hour, min, sec);

	return 0;
}

double input1(void)
{
	double dis;
	printf("거리를 입력하시오(km단위) : ");
	scanf("%lf", &dis);
	return dis;
}

double input2(void)
{
	double sph;
	printf("시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &sph);
	return sph;
}

void output(double dis, int hour, int min, double sec)
{
	printf("%lf km => %d시간 %d분 %.3lf초 소요됨\n", dis, hour, min, sec);
}