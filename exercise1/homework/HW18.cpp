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
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	return age;
}

int input2()
{
	int n;
	printf("���尴�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);
	return n;
}

void output(int age, int n)
{
	if (n < 5) {
		if (age <= 7) {
			printf("����� => %d��\n", n * 500);
			printf("���αݾ� => 0��\n");
			printf("�����ݾ� => %d��\n", n * 500);
		}
		else if(age <= 13){
			printf("����� => %d��\n", n * 700);
			printf("���αݾ� => 0��\n");
			printf("�����ݾ� => %d��\n", n * 700);
		}
		else if (age <= 19) {
			printf("����� => %d��\n", n * 1000);
			printf("���αݾ� => 0��\n");
			printf("�����ݾ� => %d��\n", n * 1000);
		}
		else if (age <= 55) {
			printf("����� => %d��\n", n * 1500);
			printf("���αݾ� => 0��\n");
			printf("�����ݾ� => %d��\n", n * 1500);
		}
		else {
			printf("����� => %d��\n", n * 500);
			printf("���αݾ� => 0��\n");
			printf("�����ݾ� => %d��\n", n * 500);
		}
	}
	else
	{
		if (age <= 7) {
			printf("����� => %d��\n", n * 500);
			printf("���αݾ� => %.lf��\n", (n * 500) * 0.1);
			printf("�����ݾ� => %.lf��\n",( n * 500) * 0.9);
		}
		else if (age <= 13) {
			printf("����� => %d��\n", n * 700);
			printf("���αݾ� => %.lf��\n", (n * 700) * 0.1);
			printf("�����ݾ� => %.lf��\n", (n * 700) * 0.9);
		}
		else if (age <= 19) {
			printf("����� => %d��\n", n * 1000);
			printf("���αݾ� => %.lf��\n", (n * 1000) * 0.1);
			printf("�����ݾ� => %.lf��\n", (n * 1000) * 0.9);
		}
		else if (age <= 55) {
			printf("����� => %d��\n", n * 1500);
			printf("���αݾ� => %.lf��\n", (n * 1500) * 0.1);
			printf("�����ݾ� => %.lf��\n", (n * 1500) * 0.9);
		}
		else {
			printf("����� => %d��", n * 500);
			printf("���αݾ� => %.lf��\n", (n * 500) * 0.1);
			printf("�����ݾ� => %.lf��\n", (n * 500) * 0.9);
		}
	}
}