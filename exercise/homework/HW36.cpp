#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();

int main()
{
	long long int n;
	int i;
	long long int n1 = 1, n2 = 1, tot=0;

	while (1) {
		printf("피보나치 수열의 항수를 입력하시오 : ");
		scanf("%lld", &n);
		myflush();
		if (n >= 1 && n <= 30) {
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
		}
	}
	
	for (i = 1; i <= n; i++) {
		if (i == 1) {
			printf("%lld", n1);
			tot = tot + n1;
		}
		else if (i % 2 == 0) {
			printf(" + %lld", n2);
			n1 = n1 + n2;
			tot = tot + n2;
		}
		else if (i % 2 == 1) {
			printf(" + %lld", n1);
			n2 = n1 + n2;
			tot = tot + n1;
		}
	}
	printf(" = %lld\n", tot);
	return 0;
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}