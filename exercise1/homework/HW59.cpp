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
		printf("* �Է��� ������ ���� : ");
		res = scanf("%d", &num);
		myflush();
		if (res == 0) {
			break;
		}
		printf("* ���� �Է� : ");
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
		printf("  ���� �ٸ� ���� ���� : %d\n\n", tot);
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