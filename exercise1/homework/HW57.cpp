#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
void inputStr(char(*)[20]);
void sortStr(char(*)[20]);
void outputStr(char(*)[20]);

int main()
{
	char str[5][20];
	int i;

	inputStr(str);
	sortStr(str);
	outputStr(str);

	return 0;
}

void inputStr(char(*sp)[20])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("# %d번 문자열을 입력하시오 : ", i + 1);
		scanf("%s", sp[i]);
	}
}

void sortStr(char(*sp)[20])
{
	char temp[20];
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (sp[i][0] > sp[j][0]) {
				strcpy(temp, sp[i]);
				strcpy(sp[i], sp[j]);
				strcpy(sp[j], temp);
			}
		}
	}
}

void outputStr(char(*sp)[20])
{
	int i;
	int len;
	
	for (i = 0; i < 5; i++)
	{
		len = strlen(sp[i]);
		printf("%s %c %c\n", sp[i], sp[i][0], sp[i][len-1]);
	}
}