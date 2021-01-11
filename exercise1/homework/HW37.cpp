#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i, j;
	int num = 1;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if ((num % 3 == 0) && (num % 15 != 0)) {
				printf("%5s", "*");
				num++;
			}
			else if ((num % 5 == 0) && (num % 15 != 0)) {
				printf("%5s", "#");
				num++;
			}
			else {
				printf("%5d", num);
				num++;
			}
		}
		printf("\n");
	}
	return 0;
}