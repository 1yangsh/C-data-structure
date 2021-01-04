#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();

int main()
{
	int ary[1000];
	int num;
	int i,j,k,res;
	int tot=0;

	while (1) {
		printf("* 입력할 숫자의 개수 : ");
		res = scanf("%d", &num);
		myflush();
		if (res == 0) {
			break;
		}
		printf("* 숫자 입력 : ");
		for (i = 0; i < num; i++)
		{
			scanf(" %d", &ary[i]);
		}
		for (j = 0; j < num; j++) {
			tot++;
			for (k = j + 1; k < num; k++) {
				if (ary[j] == ary[k]) {
					if (ary[j] != 0) {
						tot--;
						ary[k] = 0;
					}
					else {
						;
					}
				}
				else {
					;
				}
			}
		}
		printf("  서로 다른 수의 개수 : %d\n\n", tot);
		tot = 0;
	}
	return 0;
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}