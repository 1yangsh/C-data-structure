#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	char ch;
	int alphabet = 0;
	int number = 0;
	int blank = 0;
	int rest = 0;
	printf("# ���� ������ �Է��Ͻÿ� : \n");
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
	printf("\n* ������ ��ҹ��� ���� : %d��\n", alphabet);
	printf("* ���ڹ��� ���� : %d��\n", number);
	printf("* ���鹮��(space, tab, enter) ���� : %d��\n", blank);
	printf("* �� �� ��Ÿ���� ���� : %d��\n", rest);
	return 0;
}