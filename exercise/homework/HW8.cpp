#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	int his, lit, art;
	int tot;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &his, &lit, &art);
	tot = his + lit + art;
	printf("총점은 %d 이고 평균은 %.2lf 입니다", tot, tot / 3.0);
	return 0;
}