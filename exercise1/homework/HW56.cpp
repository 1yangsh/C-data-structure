#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputAry(int(*)[5], int);
void outputAry(int(*)[5], int);

int main()
{
	int num[5][5];
	int row;
	row = sizeof(num) / sizeof(num[0]);

	inputAry(num, row);
	outputAry(num, row);

	return 0;
}

void inputAry(int(*p)[5], int row)
{
	srand((unsigned int)time(NULL));
	int i, j;

	for (i = 0; i < row; i++) {
		for (j = 0; j < 5; j++) {
			p[i][j] = (rand() % 20) + 1;
		}
	}
}

void outputAry(int(*p)[5], int row)
{
	int i, j;
	int sum1=0, sum2=0, sum3=0;

	for (i = 0; i < row; i++) {
		printf("%d¹ø Çà : ", i);
		for (j = 0; j < 5; j++) {
			printf("%-3d", p[i][j]);
			if (i == j) {
				sum1 += p[i][j];
			}
			else if (i < j) {
				sum2 += p[i][j];
			}
			else if (i > j) {
				sum3 += p[i][j];
			}
		}
		printf("\n");
	}
	printf("\nsum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);
	printf("sum3 = %d\n", sum3);
}