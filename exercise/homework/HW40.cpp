#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();

int main()
{
	int i, j, res;
	int line;
	while (1) {
		printf("# 출력 라인수를 입력하시오 : ");
		res = scanf("%d", &line);
		void myflush();
		if (res == 0) {
			break;
		}


		for (i = 1; i <= line; i++) {
			for (j = 0; j < i; j++) {
				printf("%-c", '*');
			}
			for (j = 0; j < (20 - 2 * i); j++) {
				printf("%c", ' ');
			}
			for (j = 0; j < i; j++) {
				printf("%c", '*');
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