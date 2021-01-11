#pragma warning (disable : 4996)
#include <stdio.h>
void inputAry(int *, int *);
void outputAry(int *, int);
void sortData(int *, int);

int main()
{
	int ary[100];
	int tc;
	int count=0;
	int i, j=0;
	freopen("c:\\data\\hw52_sortData.txt", "rt", stdin);
	scanf("%d", &tc);
	printf("tc = %d\n", tc);

	for (i = 0; i < tc; i++) {
		printf("# 소트 전 데이터 : ");
		inputAry(ary, &count);		
		printf("\n# 소트 후 데이터 : ");
		sortData(ary, count);
		outputAry(ary, count);
		printf("\n\n");
		count = 0;
	}
	return 0;
}

void inputAry(int *ary, int *count)
{
	int i = 0;
	while (1) {
		scanf(" %d", &ary[i]);
		if (ary[i] == 0) {
			break;
		}
		printf("%-3d", ary[i]);
		i++;
		(*count)++;
	}
	return;
}

void outputAry(int *ary, int count)
{
	int i;
	for (i = 0; i < count ; i++)
	{
		printf("%-3d", ary[i]);
	}
}

void sortData(int* ary, int count)
{
	int i, j, t;
	for (i = 0; i < count-1; i++) {
		for (j = i+1; j < count; j++) {
			if (ary[i] > ary[j]) {
				t = ary[i];
				ary[i] = ary[j];
				ary[j] = t;
			}
		}
	}
}