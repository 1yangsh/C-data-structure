#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	double day = 365.2422;
	int iday;
	iday = (int)day;
	int hour = (day - iday) * 24;
	int min = (((day - iday) * 24) - hour) * 60;
	double sec= (((((day - iday) * 24) - hour) * 60) - min) * 60;

	printf("%.4lf���� %d�� %d�ð� %d�� %.2lf�� �Դϴ�.\n", day, iday, hour, min, sec);
	return 0;
}