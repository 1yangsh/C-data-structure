#pragma warning(disalbe : 4996)
#include <stdio.h>

int main()
{
	int i, j, k;
	printf("<2중 for문을 이용한 출력>\n");
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 5; j++) {
			printf("%d*%d= %-5d", j, i, j * i);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 9; i++) {
		for (j = 6; j <= 9; j++) {
			printf("%d*%d= %-5d", j, i, j * i);
		}
		printf("\n");
	}

	printf("-------------------------------------------------------------\n\n");
	printf("<3중 for문을 이용한 출력>\n");

	for (i = 2; i <= 9; i += 4) {
		for (j = 1; j <= 9; j++) {
			for (k = 2; k <= 5; k++) {
				printf("%d*%d= %-5d", i, j, i * j);
				i++;
			}
			printf("\n");
			i = i - 4;
		}
		printf("\n");	
	}
	return 0;
}