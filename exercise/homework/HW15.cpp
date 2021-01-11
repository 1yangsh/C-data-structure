#pragma warning (disable : 4996)
#include <stdio.h>
double inputWeight(void);
double inputHeight(void);
double calcBmi(double, double);
void output(double);

int main()
{
	double height, weight;
	double bmi;
	weight = inputWeight();
	height = inputHeight();
	bmi = calcBmi(weight, height);
	// printf("bmi = %.1lf", bmi);
	output(bmi);
	return 0;
}

double inputWeight(void)
{
	double w;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &w);
	return w;
}

double inputHeight(void)
{
	double h;
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &h);
	return h;
}

double calcBmi(double weight, double height)
{
	double bmi;
	bmi = weight / (height * height);
	return bmi;
}

void output(double bmi)
{
	if (bmi < 18.5) {
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", bmi);
	}
	else if (bmi < 25.0) {
		printf("����� BMI�� %.1lf���� ����ü���Դϴ�.", bmi);
	}
	else if (bmi < 30.0) {
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", bmi);
	}
	else if (bmi < 40.0) {
		printf("����� BMI�� %.1lf���� ���Դϴ�.", bmi);
	}
	else
		printf("����� BMI�� %.1lf���� �����Դϴ�.", bmi);
}
