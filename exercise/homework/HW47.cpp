#pragma warning(disable : 4996)
#include <stdio.h>
void myflush();
void inputNum(double *);
double maxNum(double *);
double minNum(double *);
void output(double, double);

int main()
{
	double num[5];
	double max, min;
	
	inputNum(num);
	max = maxNum(num);
	min = minNum(num);
	output(max, min);
	
	return 0;
}

void inputNum(double *num)
{
	
	int a;
	for (int i = 0; i < 5; i++) {
		while (1) {
			printf("%d�� �� �� : ", i);
			a = scanf("%lf", &num[i]);
			myflush();
			if (a == 1) {
				break;
			}
			else {
				printf("�߸� �Է��ϼ̽��ϴ�. ���ڰ��� �Է��ϼ���.\n");
			}
		}
	}
}

double maxNum(double * num)
{
	if ((num[0] >= num[1]) && (num[0] >= num[2]) && (num[0] >= num[3]) && (num[0] >= num[4])) {
		return num[0];
	}
	else if ((num[1] >= num[0]) && (num[1] >= num[2]) && (num[1] >= num[3]) && (num[1] >= num[4])) {
		return num[1];
	}
	else if ((num[2] >= num[0]) && (num[2] >= num[1]) && (num[2] >= num[3]) && (num[2] >= num[4])) {
		return num[2];
	}
	else if ((num[3] >= num[0]) && (num[3] >= num[1]) && (num[3] >= num[2]) && (num[3] >= num[4])) {
		return num[3];
	}
	else if ((num[4] >= num[0]) && (num[4] >= num[1]) && (num[4] >= num[2]) && (num[4] >= num[3])) {
		return num[4];
	}
}

double minNum(double* num)
{
	if ((num[0] <= num[1]) && (num[0] <= num[2]) && (num[0] <= num[3]) && (num[0] <= num[4])) {
		return num[0];
	}
	else if ((num[1] <= num[0]) && (num[1] <= num[2]) && (num[1] <= num[3]) && (num[1] <= num[4])) {
		return num[1];
	}
	else if ((num[2] <= num[0]) && (num[2] <= num[1]) && (num[2] <= num[3]) && (num[2] <= num[4])) {
		return num[2];
	}
	else if ((num[3] <= num[0]) && (num[3] <= num[1]) && (num[3] <= num[2]) && (num[3] <= num[4])) {
		return num[3];
	}
	else if ((num[4] <= num[0]) && (num[4] <= num[1]) && (num[4] <= num[2]) && (num[4] <= num[3])) {
		return num[4];
	}
}

void output(double max, double min)
{
	printf("\n���� ū �� : %.2lf\n", max);
	printf("���� ���� �� : %.2lf\n", min);
	return;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}