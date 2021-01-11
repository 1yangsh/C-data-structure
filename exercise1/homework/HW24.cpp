#pragma warning (disable : 4996)
#include <stdio.h>

int input();
int calc(int);
void output(int, int);

int main()
{
	int depth, day;
	depth = input();
	day = calc(depth);
	output(depth, day);
	return 0;
}

int input(void)
{
	int depth;
	printf("* 우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &depth);
	return depth;
}

int calc(int depth)
{
	int day = 0;
	if (depth == 0) {
		return day;
	}
	else
	{
		while ((depth / 50.0) > 1) {
			depth = depth - 50;
			depth += 20;
			day++;
			}
		day++;
		return day;
	}
}

void output(int depth, int day)
{
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", ((double)depth) / 100, day);
}