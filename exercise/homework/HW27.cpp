#pragma warning (disable : 4996)
#include <stdio.h>
int input();

int main()
{
	int eggWeight;
	int i = 0;
	eggWeight = input();
	while(1) {
		if (eggWeight >= 150 && eggWeight <= 500) {
			i++;
			printf("* ���� �ް��� �� : %d\n", i);
		}
		else if (eggWeight < 150) {
			printf("* ���߸��� ������ �峭���� ���ÿ�~ ^^\n");
		}
		else if (eggWeight > 500) {
			printf("* Ÿ���� ������ �峭���� ���ÿ�~ ^^\n");
		}
		if (i == 10) {
			printf("*** �ް� ������ �������ϴ�.\n");
			break;
		}
		eggWeight = input();
	}
	return 0;
}

int input(void)
{
	int eggWeight;
	printf("# �Զ��� ���Ը� �Է��ϼ���(���� : g) : ");
	scanf("%d", &eggWeight);
	return eggWeight;
}