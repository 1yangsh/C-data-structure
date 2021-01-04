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
	printf("* �칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
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
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", ((double)depth) / 100, day);
}