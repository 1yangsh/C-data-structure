#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();
int input(int *, const char * );
int calc(int, int);
void output(int, int, int);

int main()
{
	int code, water, totCharge;
	int ch;
	while (1) {
		code = input(&ch, "* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ");
		if (code >= 1 && code <= 3) {
			break;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}
	while (1) {
		water = input(&ch, "* ��뷮�� �Է��Ͻÿ�(ton����) : ");
		if (ch == 1 && water >=0) {
			break;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}

	totCharge = calc(code, water);
	output(code, water, totCharge);

	return 0;
}

int input(int * ch, const char * msg)
{
	int n;
	printf("%s", msg);
	*ch = scanf("%d", &n);
	myflush();
	return n;
}

int calc(int code, int water)
{
	int charge,totCharge;
	switch (code) {
	case 1: charge = 50 * water;
		totCharge = charge + ((double)charge * 0.05);
		return totCharge; break;
	case 2: charge = 45 * water;
		totCharge = charge + ((double)charge * 0.05);
		return totCharge; break;
	case 3: charge = 30 * water;
		totCharge = charge + ((double)charge * 0.05);
		return totCharge; break;
	}
}

void output(int code, int water, int totCharge)
{
	switch (code) {
	case 1:printf("\n# ����� �ڵ� : %d(������)\n", code);
		printf("# ��뷮 : %d ton\n", water);
		printf("# �� ������� : %d��\n", totCharge); break;
	case 2:printf("\n# ����� �ڵ� : %d(�����)\n", code);
		printf("# ��뷮 : %d ton\n", water);
		printf("# �� ������� : %d��\n", totCharge); break;
	case 3:printf("\n# ����� �ڵ� : %d(������)\n", code);
		printf("# ��뷮 : %d ton\n", water);
		printf("# �� ������� : %d��\n", totCharge); break;
	}
}
	

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}