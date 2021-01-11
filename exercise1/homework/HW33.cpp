#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();
int menu();
int openFan();
int offFan();
void reverseFan(unsigned char *);
void displayFan(int, unsigned char *, int);


int main()
{
	int m;
	unsigned char fan = 0;
	int num = 0;
	while (1) {
		m = menu();
		if (m == 4) {
			break;
		}
		else if (m == 1) {
			num = openFan();
			displayFan(m, &fan, num);
		}
		else if (m == 2) {
			num = offFan();
			displayFan(m, &fan, num);
		}
		else if (m == 3) {
			reverseFan(&fan);
			displayFan(m, &fan, num);
		}
	}
	return 0;
}

int menu(void)
{
	int m;
	printf("\n1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
	scanf("%d", &m);
	myflush();
	if (m == 1) {
		return m;
	}
	else if (m == 2) {
		return m;
	}
	else if (m == 3) {
		return m;
	}
	else if (m == 4) {
		return m;
	}
	else {
		printf("* 잘못 입력하셨습니다.\n");
	}
}

int openFan()
{
	int fanNum;
	while (1) {
		printf("-------------------------------------------------------------------\n");
		printf("                        Fan 열기 작업 실행 화면\n");
		printf("-------------------------------------------------------------------\n");
		printf("* OPEN할 FAN 번호를 입력하시오(1~8) : ");
		scanf("%d", &fanNum);
		myflush();
		if (fanNum >= 1 && fanNum <= 8) {
			break;
		}
		printf("\n* 잘못 입력하셨습니다.\n");
	}
	return fanNum;
}

int offFan()
{
	int fanNum;
	while (1) {
		printf("-------------------------------------------------------------------\n");
		printf("                        Fan 닫기 작업 실행 화면\n");
		printf("-------------------------------------------------------------------\n");
		printf("* CLOSE할 FAN 번호를 입력하시오(1~8) : ");
		scanf("%d", &fanNum);
		myflush();
		if (fanNum >= 1 && fanNum <= 8) {
			break;
		}
		printf("\n* 잘못 입력하셨습니다.\n");
	}
	return fanNum;
}

void displayFan(int m, unsigned char *fan, int fanNum)
{
	switch (m) {
	case 1 :
		printf("-------------------------------------------------------------------\n");
		printf("8번FAN 7번FAN  6번FAN  5번FAN  4번FAN  3번FAN  2번FAN  1번FAN\n");
		*fan |= 0x80 >> (8 - fanNum);
		for (int i = 0; i < 8; i++) {
			if (*fan & (0x80 >> i)) {
				printf("%-8s", "ON");
			}
			else {
				printf("%-8s", "OFF");
			}
		}
			break;
	case 2:
		printf("-------------------------------------------------------------------\n");
		printf("8번FAN 7번FAN  6번FAN  5번FAN  4번FAN  3번FAN  2번FAN  1번FAN\n");
		*fan &= (0x80 >> (8 - fanNum) ^ 0xff);
		for (int i = 0; i < 8; i++) {
			if (*fan & (0x80 >> i)) {
				printf("%-8s", "ON");
			}
			else {
				printf("%-8s", "OFF");
			}
		}
		break;
	case 3 : printf("-------------------------------------------------------------------\n");
		printf("8번FAN 7번FAN  6번FAN  5번FAN  4번FAN  3번FAN  2번FAN  1번FAN\n");
		for (int i = 0; i < 8; i++) {
			if (*fan & (0x80 >> i)) {
				printf("%-8s", "ON");
			}
			else {
				printf("%-8s", "OFF");
			}
		}
		break;
	}
	printf("\n-------------------------------------------------------------------\n");
}

void reverseFan(unsigned char *fan)
{
	printf("-------------------------------------------------------------------\n");
	printf("                      Fan 전체 전환 작업 실행 화면\n");
	printf("-------------------------------------------------------------------\n");
	*fan = ~(*fan);
	printf("전체 FAN의 상태가 전환되었습니다. (ON, OFF 상태 뒤바뀜)\n");
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}