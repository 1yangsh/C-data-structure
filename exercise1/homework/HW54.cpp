#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void myflush(void);
void input(char*);
int checkNum(char*, int);
void output(char*, int);


int main()
{
	char str[100];
	unsigned int len;
	int num;

	while (1) {
		input(str);
		if (strcmp(str, "end") == 0) {
			break;
		}
		len = strlen(str);
		num = checkNum(str, len);
		output(str, num);
	}
	return 0;
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}

void input(char* str)
{
	printf("# 문장을 입력하시오 : ");
	scanf("%s", str);
	myflush();
}

int checkNum(char* str, int len)
{
	int i;
	int num;
	int tot=0;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= '0' && str[i] <= '9') {
			num = atoi(&str[i]);
			while (1) {
				if (str[i + 1] < '0' || str[i + 1] > '9') {
					break;
				}
				else
					i++;
			}
			tot += num;
		}
	}
	return tot;
}

void output(char* str, int num)
{
	printf("  \"%s\" 내의 총 숫자는 [%d]입니다.\n", str, num);
}