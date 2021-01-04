#pragma warning (disable : 4996)
#include <stdio.h>
int input();

int main()
{
	int eggWeight;
	int i = 0;
	eggWeight = input();
	while(1) {
		if (eggWeight >= 150 && eggWeight <= 500) {
			i++;
			printf("* 현재 달걀의 수 : %d\n", i);
		}
		else if (eggWeight < 150) {
			printf("* 메추리알 가지고 장난하지 마시오~ ^^\n");
		}
		else if (eggWeight > 500) {
			printf("* 타조알 가지고 장난하지 마시오~ ^^\n");
		}
		if (i == 10) {
			printf("*** 달걀 포장이 끝났습니다.\n");
			break;
		}
		eggWeight = input();
	}
	return 0;
}

int input(void)
{
	int eggWeight;
	printf("# 게란의 무게를 입력하세요(단위 : g) : ");
	scanf("%d", &eggWeight);
	return eggWeight;
}