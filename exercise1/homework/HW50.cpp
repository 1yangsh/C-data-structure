#pragma warning (disable : 4996)
#include <stdio.h>
#define SIZE 99
void myflush();
void input(char*, char*);
char strcheck(char*, char);

int main()
{
	char ch;
	char str[SIZE];
	char n;
	input(str, &ch);
	n = strcheck(str, ch);
	if (n == -1) {
		printf("\"%s\"문자열 안에 '%c'문자는 존재하지 않습니다.", str, ch);
	}
	else
		printf("\"%s\"문자열 안에 '%c'문자는 %d번 위치에 존재합니다.\n", str, ch, n);

	return 0;
}

void input(char* str, char* ch)
{
	printf("# 문자열을 입력하시오 : ");
	scanf("%s", str);
	myflush();
	printf("# 문자를 입력하시오 : ");
	scanf("%c", ch);
	return;
}

char strcheck(char* str, char ch)
{
	int i;
	for (i = 0; i < SIZE; i++) {
		if (str[i] == ch) {
			return i;
		}
		else {
			;
		}
	}
	return -1;
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}
