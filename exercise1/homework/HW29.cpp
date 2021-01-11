#pragma warning (disable : 4996)
#include <stdio.h>
int transNumber(int);
int inputUint(const char *msg);
int inputUint2(const char* msg);
void output(int);
void myflush();

int main()
{
	int p1, p2, n;
	int t=0;
	int tmp = 1;
	int tot = 0;
	p1 = inputUint("시작 값(P1) : ");
	p2 = inputUint("끝 값(P2) : ");
	n = inputUint2("고집수(N) : ");

	printf("고집수가 %d인 숫자 출력\n", n);
	
	while (p1 <= p2) {
		t = transNumber(p1);
		if (t >= 0 && t <= 9) {
			if (tmp == n) {
				printf("%d\n", p1);
				p1++;
				tmp = 1;
				tot++;
				
			}
			else {
				p1++;
				tmp = 1;
			}
		}
		else {
			while (1) {
				t = transNumber(t);
				tmp++;
				if (t >= 0 && t <= 9) {
					break;
				}
			}
				if (tmp == n) {
					printf("%d\n", p1);
					p1++;
					tmp = 1;
					tot++;
					
				}
				else {
					p1++;
					tmp = 1;
				}
		}
	}
	output(tot);
	return 0;
}

int transNumber(int p)
{
	int n;
	int p1000, p100, p10, p1;
	if(p>=10 && p<=99){
		p10 = p / 10;
		p1 = p % 10;
		n = p10 * p1;
	}
	else if (p >= 100 && p <= 999) {
		p100 = p / 100;
		p10 = (p % 100) / 10;
		p1 = (p % 100) % 10;
		n = p100 * p10 * p1;
	}
	else if (p >= 1000 && p < 10000) {
		p1000 = p / 1000;
		p100 = (p % 1000) / 100;
		p10 = ((p % 1000) % 100) / 10;
		p1 = ((p % 1000) % 100) % 10;
		n = p1000 * p100 * p10 * p1;
	}
	else {
		n = 0;
	}
	return n;
}

int inputUint(const char *msg)
{
	int n, res;
	while (1) {
		printf("%s", msg);
		res = scanf("%d", &n);
		if ((res == 1) && (n >= 100) && (n <= 10000)) {
			break;
		}
		else {
			myflush();
			printf("다시 입력하시오.\n");
		}
	}
	return n;
}

int inputUint2(const char* msg)
{
	int n, res;
	while (1) {
		printf("%s", msg);
		res = scanf("%d", &n);
		if ((res == 1) && (n >= 1) && (n <= 10)) {
			break;
		}
		else {
			myflush();
			printf("다시 입력하시오.\n");
		}
	}
	return n;
}

void myflush()
{
	while (getchar() != '\n')
		;
}

void output(int n)
{
	printf("총 개수 : %d개", n);
}