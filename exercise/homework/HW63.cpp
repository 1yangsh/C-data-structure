#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	int ary[10];
	int test[10];
	int i, j ,k;
	int temp, cnt=0;
	int res;

	while (1) {
		printf("숫자를 입력하시오 : ");
		scanf("%d", &num);
		if (num <= 100) {
			break;
		}
	}
	for (i = 0; i < num; i++) {
		scanf("%d", &ary[i] );
	}
		
	for (j = 0; j < num-1; j++) {
		test[j] = abs(ary[j + 1] - ary[j]);
	}

	for (i = 0; i < num-1; i++) {
		for (k = i + 1; k < num-1; k++) {
			if (test[i] > test[k]) {
				temp = test[i];
				test[i] = test[k];
				test[k] = temp;
			}
		}
	}

	for (j = 0; j < num - 2; j++) {
		if (test[j + 1] - test[j] == 1) {
			cnt++;
		}
		if (cnt == num - 2) {
			res = 1;
		}
		else {
			res = 0;
		}
	}


	printf("검사한 수열 : ");
	for (i = 0; i < num; i++) {
		printf("%d ", ary[i]);
	}
	if (res == 0) {
		printf("(Not jolly jumper)\n");
	}
	else {
		printf("(Jolly jumper)\n");
	}
	
	return 0;
}