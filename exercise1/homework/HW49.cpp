#pragma warning (disable : 4996)
#include <stdio.h>
void swap(int*, int);

int main()
{
	int i;
	int num[] = { 1,2,3,4,5 };
	int size;
	size = sizeof(num) / sizeof(num[0]);

	printf("처음 배열에 저장된 값 : ");
	for (i = 0; i < size; i++) {
		printf("%3d", num[i]);
	}
	swap(num, size);
	printf("\n바뀐 배열에 저장된 값 : ");
	for (i = 0; i < size; i++) {
		printf("%3d", num[i]);
	}
	printf("\n");
	return 0;
}

void swap(int* num, int size)
{
	int i, n;
	for (i = 0; i < (size/2); i++) {
		n = num[i];
		num[i] = num[(size-1) - i];
		num[(size-1) - i] = n;
	}
}