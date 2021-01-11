#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i, j;
	int num;
	for (i = 0; i < 10; i++) {
		num = i;
		for (j = 0; j < 10; j++) {
			printf("%3d", num);
			num += 10;
		}
		printf("\n");
	}
	return 0;
}