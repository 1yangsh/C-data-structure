#pragma warning (disable : 4996)
#include <stdio.h>
int input();
int yearCheck(int);
void output(int, int);

int main()
{
	int year, n;
	int i=0;
	while (i < 10) { // teat data 10개 검사하기 위해 10번 반복
		year = input();
		n = yearCheck(year);
		output(year, n);
		i++;
	}
	
	return 0;
}

int input()
{
	int year;
	printf("년도를 입력하세요 : ");
	scanf("%d", &year);
	return year;
}

int yearCheck(int y)
{
	if (y % 4 != 0) {
		return 0;
	}
	else if (y % 100 != 0) {
		return 1;
	}
	else if (y % 400 != 0) {
		return 0;
	}
	else
		return 1;
}

void output(int year,int n)
{
	if (n == 0) {
		printf("%d년은 평년(Common year)입니다.\n", year);
	}
	else {
		printf("%d년은 윤년(Leap year)입니다.\n", year);
	}
}