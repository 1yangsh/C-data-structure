#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
void myflush();
int input();
int primeNumber(int);

int main()
{
	int num;
	int i, count = 0;
	num = input();

	printf("1~%d까지의 소수값은 다음과 같습니다.\n", num);
	for (i = 2; i <= num; i++)
	{
		if (primeNumber(i) == 1) {
			printf("%-5d", i);
			count++;
			if (count % 5 == 0) {
				printf("\n");
			}
		}
		
	}
	printf("\n1~%d까지의 총 소수는 %d개 입니다.\n", num, count);

	return 0;
}

int input(void)
{
	int num, res;
	while (1) {
		printf("* 정수값 하나를 입력하시오 : ");
		res = scanf("%d", &num);
		myflush();
		if (res == 1 && num > 1) {
			break;
		}
	}
	return num;
}

int primeNumber(int number)
{
	int i;
	for (i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0) {
			return 0;
		}
		else {
			;
		}
	}
	return 1;
}

void myflush(void)
{
	while (getchar() != '\n')
	{
		;
	}
}