#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int);
int input();
void output(int, int);

int main()
{
	int num;
	int n;
	int i=1;
	srand((unsigned int)time(NULL));
	num = random(100) + 1;

	do {
		n = input();
	} while (n < 1 || n >= 101);

	while (num != n) {
		output(num, n);
		i++;
		n = input();
	}
	printf("우와~ 맞았당~~~ 추카추카~~ %d번째 만에 맞추셨습니다.\n", i);
	return 0;
}

int random(int n)
{
	int res;
	res = rand() % n;
	return res;
}

int input(void)
{
	int n;
	printf("# 숫자를 입력하시오 : ");
	scanf("%d", &n);
	return n;
}

void output(int num, int n)
{
		if (num > 50) {
			if (n > 50 && n < 101) {
				if (num > n) {
					printf("%d보다는 크고 101보다는 작습니다.\n", n);
				}
				else if (num < n) {
					printf("50보다는 크고 %d보다는 작습니다.\n", n);
				}
			}
			else {
				printf("%d보다는 크고 101보다는 작습니다\n", n);
			}
		}
		else if (num < 50) {
			if (n > 0 && n < 50) {
				if (num > n) {
					printf("%d보다는 크고 51보다는 작습니다.\n", n);
				}
				else if (num < n) {
					printf("0보다는 크고 %d보다는 작습니다.\n", n);
				}
			}
			else {
				printf("0보다는 크고 %d보다는 작습니다.\n", n);
			}
		}
}



