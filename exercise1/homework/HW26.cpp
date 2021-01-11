#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int);
int input();
void myflush();

int main()
{
	int num;
	int n;
	char num2[20];
	char n2[20];
	int win=0, draw=0;
	srand((unsigned int)time(NULL));
	
	
	n = input();
	while (1) {
			switch (n) {
			case 1: sprintf(n2, "바위", n); break;
			case 2: sprintf(n2, "가위", n); break;
			case 3: sprintf(n2, "보", n); break;
			default:;
			}
			myflush();

			num = random(3) + 1;
			switch (num) {
			case 1: sprintf(num2, "바위", num); break;
			case 2: sprintf(num2, "가위", num); break;
			case 3: sprintf(num2, "보", num); break;
			default:;
			}
			
			switch (n) {
			case 1: if (num == 1) {
				printf("  당신은 %s 선택, 컴퓨터는 %s 선택 : 비겼습니다\n", n2, num2);
				draw++; break;
			}
					else if (num == 2) {
				printf("  당신은 %s 선택, 컴퓨터는 %s 선택 : 이겼습니다\n", n2, num2); 
				win++; break;
			}
					else if (num == 3) {
				printf("  당신은 %s 선택, 컴퓨터는 %s 선택 : 당신이 졌습니다\n", n2, num2); 
				break;
			}
			case 2: if (num == 1) {
				printf("  당신은 %s 선택, 컴퓨터는 %s 선택 : 당신이 졌습니다\n", n2, num2); 
				 break;
			}
					else if (num == 2) {
				printf("  당신은 %s 선택, 컴퓨터는 %s 선택 : 비겼습니다\n", n2, num2); 
				draw++;  break;
			}
					else if (num == 3) {
				printf("  당신은 %s 선택, 컴퓨터는 %s 선택 : 이겼습니다\n", n2, num2); 
				win++; break;
			}
			case 3: if (num == 1) {
				printf("  당신은 %s 선택, 컴퓨터는 %s 선택 : 이겼습니다\n", n2, num2);  
				win++; break;
			}
					else if (num == 2) {
				printf("  당신은 %s 선택, 컴퓨터는 %s 선택 :  당신이 졌습니다\n", n2, num2); 
				break;
			}
					else if (num == 3) {
				printf("  당신은 %s 선택, 컴퓨터는 %s 선택 : 비겼습니다\n", n2, num2); 
				draw++; break;
			}
			default:;
			}
			if ((n == 1 && num == 3) || (n == 2 && num == 1) || (n == 3 && num == 2))
			{
				break;
			}
			n = input();
	}
	
	printf("게임결과 %d승 %d무\n", win, draw);
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
	printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
	scanf("%d", &n);
	return n;
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
	return;
}