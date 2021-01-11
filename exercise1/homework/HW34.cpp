#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();
int input(int *, const char * );
int calc(int, int);
void output(int, int, int);

int main()
{
	int code, water, totCharge;
	int ch;
	while (1) {
		code = input(&ch, "* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
		if (code >= 1 && code <= 3) {
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
		}
	}
	while (1) {
		water = input(&ch, "* 사용량을 입력하시오(ton단위) : ");
		if (ch == 1 && water >=0) {
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
		}
	}

	totCharge = calc(code, water);
	output(code, water, totCharge);

	return 0;
}

int input(int * ch, const char * msg)
{
	int n;
	printf("%s", msg);
	*ch = scanf("%d", &n);
	myflush();
	return n;
}

int calc(int code, int water)
{
	int charge,totCharge;
	switch (code) {
	case 1: charge = 50 * water;
		totCharge = charge + ((double)charge * 0.05);
		return totCharge; break;
	case 2: charge = 45 * water;
		totCharge = charge + ((double)charge * 0.05);
		return totCharge; break;
	case 3: charge = 30 * water;
		totCharge = charge + ((double)charge * 0.05);
		return totCharge; break;
	}
}

void output(int code, int water, int totCharge)
{
	switch (code) {
	case 1:printf("\n# 사용자 코드 : %d(가정용)\n", code);
		printf("# 사용량 : %d ton\n", water);
		printf("# 총 수도요금 : %d원\n", totCharge); break;
	case 2:printf("\n# 사용자 코드 : %d(상업용)\n", code);
		printf("# 사용량 : %d ton\n", water);
		printf("# 총 수도요금 : %d원\n", totCharge); break;
	case 3:printf("\n# 사용자 코드 : %d(공업용)\n", code);
		printf("# 사용량 : %d ton\n", water);
		printf("# 총 수도요금 : %d원\n", totCharge); break;
	}
}
	

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}