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
	printf("�Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &dis);
	return dis;
}

double input2(void)
{
	double sph;
	printf("�ü��� �Է��Ͻÿ�(km/h����) : ");
	scanf("%lf", &sph);
	return sph;
}

void output(double dis, int hour, int min, double sec)
{
	printf("%lf km => %d�ð� %d�� %.3lf�� �ҿ��\n", dis, hour, min, sec);
}