#pragma warning (disable : 4996)
#include <stdio.h>
int input();
int calc(int);
void output(int);

int main()
{
	int stn, cost;
	int i=0;
	while (i < 5) {
		stn = input();
		cost = calc(stn);
		output(cost);
		i++;
	}
	return 0;
}

int input(void)
{
	int n;
	printf("역수를 입력하시오 : ");
	scanf("%d", &n);
	return n;
}

int calc(int n)
{
	int cost;
	if (n < 6) {
		cost = 600;
	}
	else if (n < 11) {
		cost = 800;
	}
	else
		cost = 800 + 100 * ((n - 9) / 2);
	return cost;
}

void output(int n)
{
		printf("요금 : %d원\n", n);
}