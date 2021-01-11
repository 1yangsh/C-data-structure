#pragma warning (disable : 4996)
#include <stdio.h>
int input1();
int input2();
void output(int, int);

int main()
{
	int age, n;
	age = input1();
	n = input2();
	output(age, n);

	return 0;
}

int input1()
{
	int age;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	return age;
}

int input2()
{
	int n;
	printf("입장객의 수를 입력하세요 : ");
	scanf("%d", &n);
	return n;
}

void output(int age, int n)
{
	if (n < 5) {
		if (age <= 7) {
			printf("입장료 => %d원\n", n * 500);
			printf("할인금액 => 0원\n");
			printf("결제금액 => %d원\n", n * 500);
		}
		else if(age <= 13){
			printf("입장료 => %d원\n", n * 700);
			printf("할인금액 => 0원\n");
			printf("결제금액 => %d원\n", n * 700);
		}
		else if (age <= 19) {
			printf("입장료 => %d원\n", n * 1000);
			printf("할인금액 => 0원\n");
			printf("결제금액 => %d원\n", n * 1000);
		}
		else if (age <= 55) {
			printf("입장료 => %d원\n", n * 1500);
			printf("할인금액 => 0원\n");
			printf("결제금액 => %d원\n", n * 1500);
		}
		else {
			printf("입장료 => %d원\n", n * 500);
			printf("할인금액 => 0원\n");
			printf("결제금액 => %d원\n", n * 500);
		}
	}
	else
	{
		if (age <= 7) {
			printf("입장료 => %d원\n", n * 500);
			printf("할인금액 => %.lf원\n", (n * 500) * 0.1);
			printf("결제금액 => %.lf원\n",( n * 500) * 0.9);
		}
		else if (age <= 13) {
			printf("입장료 => %d원\n", n * 700);
			printf("할인금액 => %.lf원\n", (n * 700) * 0.1);
			printf("결제금액 => %.lf원\n", (n * 700) * 0.9);
		}
		else if (age <= 19) {
			printf("입장료 => %d원\n", n * 1000);
			printf("할인금액 => %.lf원\n", (n * 1000) * 0.1);
			printf("결제금액 => %.lf원\n", (n * 1000) * 0.9);
		}
		else if (age <= 55) {
			printf("입장료 => %d원\n", n * 1500);
			printf("할인금액 => %.lf원\n", (n * 1500) * 0.1);
			printf("결제금액 => %.lf원\n", (n * 1500) * 0.9);
		}
		else {
			printf("입장료 => %d원", n * 500);
			printf("할인금액 => %.lf원\n", (n * 500) * 0.1);
			printf("결제금액 => %.lf원\n", (n * 500) * 0.9);
		}
	}
}