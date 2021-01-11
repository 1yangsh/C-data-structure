#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i = 1;
	double height, total=0;
	while (i < 6) {
		printf("%d번 학생의 키는? ", i);
		scanf("%lf", &height);
		total += height;
		i++;
	}
	printf("다섯 명의 평균 키는 %.1lf 입니다.\n", total/5);

	return 0;
}