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
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &w);
	return w;
}

double inputHeight(void)
{
	double h;
	printf("키를 입력하세요(m) : ");
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
		printf("당신의 BMI는 %.1lf으로 저체중입니다.", bmi);
	}
	else if (bmi < 25.0) {
		printf("당신의 BMI는 %.1lf으로 정상체중입니다.", bmi);
	}
	else if (bmi < 30.0) {
		printf("당신의 BMI는 %.1lf으로 과체중입니다.", bmi);
	}
	else if (bmi < 40.0) {
		printf("당신의 BMI는 %.1lf으로 비만입니다.", bmi);
	}
	else
		printf("당신의 BMI는 %.1lf으로 고도비만입니다.", bmi);
}
