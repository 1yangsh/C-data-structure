#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int);
int input();
void output(int, int);

int main()
{
	int num;
	int n;
	int i=1;
	srand((unsigned int)time(NULL));
	num = random(100) + 1;

	do {
		n = input();
	} while (n < 1 || n >= 101);

	while (num != n) {
		output(num, n);
		i++;
		n = input();
	}
	printf("���~ �¾Ҵ�~~~ ��ī��ī~~ %d��° ���� ���߼̽��ϴ�.\n", i);
	return 0;
}

int random(int n)
{
	int res;
	res = rand() % n;
	return res;
}

int input(void)
{
	int n;
	printf("# ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	return n;
}

void output(int num, int n)
{
		if (num > 50) {
			if (n > 50 && n < 101) {
				if (num > n) {
					printf("%d���ٴ� ũ�� 101���ٴ� �۽��ϴ�.\n", n);
				}
				else if (num < n) {
					printf("50���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", n);
				}
			}
			else {
				printf("%d���ٴ� ũ�� 101���ٴ� �۽��ϴ�\n", n);
			}
		}
		else if (num < 50) {
			if (n > 0 && n < 50) {
				if (num > n) {
					printf("%d���ٴ� ũ�� 51���ٴ� �۽��ϴ�.\n", n);
				}
				else if (num < n) {
					printf("0���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", n);
				}
			}
			else {
				printf("0���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", n);
			}
		}
}



