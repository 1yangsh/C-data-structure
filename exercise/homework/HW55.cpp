#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inputAry(int (*)[4], int);
void outputAry(int (*)[4], int);

int main()
{
	int num[3][4];
	int row;
	row = sizeof(num) / sizeof(num[0]);
	
	inputAry(num, row);
	outputAry(num, row);
	return 0;
}

void inputAry(int(*p)[4], int row)
{
	srand((unsigned int)time(NULL));
	int i, j;

	for (i = 0; i < row; i++) {
			for (j = 0; j < 4; j++) {
				p[i][j] = (rand() % 9) + 1;
			}
	}
}

void outputAry(int (*p)[4], int row)
{
	int n;
	int i, j;
	int rtot;
	
	for (i = 0; i < row; i++) {
		rtot=0;
		printf("%d행     :", i);
		for (j = 0; j < 4; j++) {
			printf("%3d", p[i][j]);
			rtot += p[i][j];
		}
		printf("%7d 행의 합 : %d\n", i, rtot);
	}
	printf("열의 합 :");
	for (j = 0; j < 4; j++) {
		printf("%3d", p[0][j] + p[1][j] + p[2][j]);
	}
	printf("\n");
}

