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
	printf("# ���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &start);
	myflush();
	while (1) {
		printf("# �� ���� �Է��Ͻÿ� : ");
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
		printf("* %d~%d ������ ¦���� ���� ���Ұ���? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:o) : ", start, end);
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
		printf("%d~%d ������ ¦���� (", start, end);
		for (i = start; i <= end; i++) {
			if (i % 2 == 0) {
				printf("%-3d", i);
				sum += i;
			}
		}
		printf(")�� ���� %d �Դϴ�.\n", sum);
	}
	else if( n == 'o')
	{
		printf("%d~%d ������ Ȧ���� (", start, end);
		for (i = start; i <= end; i++) {
			if (i % 2 == 1) {
				printf("%-3d", i);
				sum += i;
			}
		}
		printf(")�� ���� %d �Դϴ�.\n", sum);
	}
}

void myflush(void)
{
	while (getchar() != '\n')
	{
		;
	}
}