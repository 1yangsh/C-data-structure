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
		printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� �������� �ʽ��ϴ�.", str, ch);
	}
	else
		printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� %d�� ��ġ�� �����մϴ�.\n", str, ch, n);

	return 0;
}

void input(char* str, char* ch)
{
	printf("# ���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", str);
	myflush();
	printf("# ���ڸ� �Է��Ͻÿ� : ");
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
