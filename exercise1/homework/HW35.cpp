#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int num;
	int a, tot=0;
	int i;
	for (i = 1; i < 6; ) {
		printf("0 보다 큰수를 입력하시오(%d 번째) : ", i);
		a = scanf("%d", &num);
		if (num > 0 && a == 1) {
			tot += num;
			i++;
		}
		else {
			;
		}
	}
	printf("입력된 값의 총 합 : %d\n", tot);

	return 0;
}
