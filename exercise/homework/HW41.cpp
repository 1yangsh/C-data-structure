#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();

int main()
{
	int alphabet;
	int i, j;
	
	while (1) {
		printf("* 영문자 대문자 입력 ('A'~'Z') : ");
		alphabet = getchar();
		if (alphabet < 'A' || alphabet > 'Z') {
			break;
		}
		myflush();

		for (i = 0; i < (alphabet - 63); i++) {
			for (j = 0; j < i; j++) {
				printf("%c", alphabet - j);
			}
			printf("\n");
		}
	}
	return 0;
}

void myflush(void)
{
	while (getchar() != '\n')
		;
}