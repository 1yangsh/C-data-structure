#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void input(char*);
int checkStr(char*, int);
void output(char*, int);
void myflush(void);

int main()
{
	char str[10];
	unsigned int len;
	int n;

	while (1) {
		input(str);
		if (strcmp(str, "end") == 0){
		break;
}
		len = strlen(str);
		n = checkStr(str, len);
		output(str, n);
	}
	return 0;
}

void input(char* str)
{
	printf("# 단어 입력 : ");
	scanf("%s", str);
	myflush();
}

int checkStr(char* str, int len)
{
	if (toupper(str[0]) != toupper(str[len - 1])) {
		return 0;
	}
	else
		return 1;
}

void output(char* str, int n)
{
	switch (n) {
	case 0: printf("\"%s\" : 회문이 아닙니다!\n", str);
		break;
	case 1:printf("\"%s\" : 회문입니다!\n", str);
		break;
	}
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}