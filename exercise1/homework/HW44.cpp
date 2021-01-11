#pragma warning (disable : 4996)
#include <stdio.h>
void myflush(void);
void inputRange(int*, int*);
char inputEvenOdd(int, int);
void output(char, int, int);

int main()
{
	char n;
	int start, end;
	inputRange(&start, &end);
	n = inputEvenOdd(start, end);
	output(n, start, end);

	return 0;
}

void inputRange(int* start, int* end)
{
	printf("# 시작 값을 입력하시오 : ");
	scanf("%d", &start);
	myflush();
	while (1) {
		printf("# 끝 값을 입력하시오 : ");
		scanf("%d", &end);
		myflush();
		if (*end > *start) {
			break;
		}
	}
	return;
}

char inputEvenOdd(int start, int end)
{
	char n;
	while (1) {
		printf("* %d~%d 까지의 짝수의 합을 구할가요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ", start, end);
		scanf("%c", &n);
		myflush();
		if (n == 'e' || n == 'o') {
			break;
		}
	}
	return n;
}

void output(char n, int start, int end)
{
	int sum = 0;
	int i;
	if (n == 'e')
	{
		printf("%d~%d 까지의 짝수의 (", start, end);
		for (i = start; i <= end; i++) {
			if (i % 2 == 0) {
				printf("%-3d", i);
				sum += i;
			}
		}
		printf(")의 합은 %d 입니다.\n", sum);
	}
	else if( n == 'o')
	{
		printf("%d~%d 까지의 홀수의 (", start, end);
		for (i = start; i <= end; i++) {
			if (i % 2 == 1) {
				printf("%-3d", i);
				sum += i;
			}
		}
		printf(")의 합은 %d 입니다.\n", sum);
	}
}

void myflush(void)
{
	while (getchar() != '\n')
	{
		;
	}
}