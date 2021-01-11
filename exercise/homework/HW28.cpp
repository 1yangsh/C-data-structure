#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	char ch;
	int alphabet = 0;
	int number = 0;
	int blank = 0;
	int rest = 0;
	printf("# 영문 문장을 입력하시오 : \n");
	while ((ch = getchar()) !=  EOF) {
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
			alphabet++;
		}
		else if (ch >= '0' && ch <= '9') {
			number++;
		}
		else if (ch == ' ' || ch == '\n' || ch =='\t') {
			blank++;
		}
		else  {
			rest++;
		}
	}
	printf("\n* 영문자 대소문자 개수 : %d개\n", alphabet);
	printf("* 숫자문자 개수 : %d개\n", number);
	printf("* 여백문자(space, tab, enter) 개수 : %d개\n", blank);
	printf("* 그 외 기타문자 개수 : %d개\n", rest);
	return 0;
}