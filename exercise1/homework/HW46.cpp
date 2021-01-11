#pragma warning (disable : 4996)
#include <stdio.h>
void myflush(void);
int yearCheck(int);
int input(int*, int*, int*);
int errorCheck(int, int, int, int);
int sumDay(int, int, int, int);
void output(int, int, int, int);

int main()
{
	int year, month, day;
	int y, res, res2;
	int sum;

	while (1) {
		res = input(&year, &month, &day);
		if (res != 3) {
			break;
		}
		else {
			while (1) {
				y = yearCheck(year);
				res2 = errorCheck(y, res, month, day);
				if (res2 == 1) {
					break;
				}
				res = input(&year, &month, &day);
			}
			sum = sumDay(y, year, month, day);
			output(sum, year, month, day);
		}
	}
	return 0;
}

int input(int* year, int* month, int* day)
{
	int res;
	printf("* 년 월 일을 입력하시오 : ");
	res = scanf("%d %d %d", year, month, day);
	myflush();
	return res;
}

int errorCheck(int y, int res, int month, int day)
{
	if (res != 3 || (month < 1 || month > 12) || (day < 1 || day > 31)) {
		return 0;
	}
	else if (y == 0 && month == 2 && day > 28) {
		return 0;
	}
	else if (y == 1 && month == 2 && day > 29) {
		return 0;
	}
	else {
		return 1;
	}
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

int sumDay(int y, int year, int month, int day)
{
	int i, j;
	int sumDay = 0;
	for (i = 1990; i < year; i++) {
		if (i % 4 != 0) {
			sumDay += 365;
		}
		else if (i % 100 != 0) {
			sumDay += 366;
		}
		else if (i % 400 != 0) {
			sumDay += 365;
		}
		else {
			sumDay += 366;
		}
	}
	for (j = 1; j < month; j++) {
		if (j % 2 != 0) {
			sumDay += 31;
		}
		if (y == 1 && j == 2) {
			sumDay += 29;
		}
		else if (y == 0 && j == 2) {
			sumDay += 28;
		}
		else if (j % 2 == 0) {
			sumDay += 30;
		}
	}
	sumDay += day;
	return sumDay;
}

void output(int sum, int year, int month, int day)
{
	switch (sum % 7)
	{
	case 0: printf("%d년 %d월 %d일은 일요일 입니다.\n", year, month, day);
		break;
	case 1: printf("%d년 %d월 %d일은 월요일 입니다.\n", year, month, day);
		break;
	case 2: printf("%d년 %d월 %d일은 화요일 입니다.\n", year, month, day);
		break;
	case 3: printf("%d년 %d월 %d일은 수요일 입니다.\n", year, month, day);
		break;
	case 4: printf("%d년 %d월 %d일은 목요일 입니다.\n", year, month, day);
		break;
	case 5: printf("%d년 %d월 %d일은 금요일 입니다.\n", year, month, day);
		break;
	case 6: printf("%d년 %d월 %d일은 토요일 입니다.\n", year, month, day);
		break;
	}
}

void myflush(void)
{
	while (getchar() != '\n')
	{
		;
	}
}