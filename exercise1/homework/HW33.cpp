#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();
int menu();
int openFan();
int offFan();
void reverseFan(unsigned char *);
void displayFan(int, unsigned char *, int);


int main()
{
	int m;
	unsigned char fan = 0;
	int num = 0;
	while (1) {
		m = menu();
		if (m == 4) {
			break;
		}
		else if (m == 1) {
			num = openFan();
			displayFan(m, &fan, num);
		}
		else if (m == 2) {
			num = offFan();
			displayFan(m, &fan, num);
		}
		else if (m == 3) {
			reverseFan(&fan);
			displayFan(m, &fan, num);
		}
	}
	return 0;
}

int menu(void)
{
	int m;
	printf("\n1. ȯǳ�� ���� / 2. ȯǳ�� �ݱ� / 3. ȯǳ�� ��ü ��ȯ / 4. ���� : ");
	scanf("%d", &m);
	myflush();
	if (m == 1) {
		return m;
	}
	else if (m == 2) {
		return m;
	}
	else if (m == 3) {
		return m;
	}
	else if (m == 4) {
		return m;
	}
	else {
		printf("* �߸� �Է��ϼ̽��ϴ�.\n");
	}
}

int openFan()
{
	int fanNum;
	while (1) {
		printf("-------------------------------------------------------------------\n");
		printf("                        Fan ���� �۾� ���� ȭ��\n");
		printf("-------------------------------------------------------------------\n");
		printf("* OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1~8) : ");
		scanf("%d", &fanNum);
		myflush();
		if (fanNum >= 1 && fanNum <= 8) {
			break;
		}
		printf("\n* �߸� �Է��ϼ̽��ϴ�.\n");
	}
	return fanNum;
}

int offFan()
{
	int fanNum;
	while (1) {
		printf("-------------------------------------------------------------------\n");
		printf("                        Fan �ݱ� �۾� ���� ȭ��\n");
		printf("-------------------------------------------------------------------\n");
		printf("* CLOSE�� FAN ��ȣ�� �Է��Ͻÿ�(1~8) : ");
		scanf("%d", &fanNum);
		myflush();
		if (fanNum >= 1 && fanNum <= 8) {
			break;
		}
		printf("\n* �߸� �Է��ϼ̽��ϴ�.\n");
	}
	return fanNum;
}

void displayFan(int m, unsigned char *fan, int fanNum)
{
	switch (m) {
	case 1 :
		printf("-------------------------------------------------------------------\n");
		printf("8��FAN 7��FAN  6��FAN  5��FAN  4��FAN  3��FAN  2��FAN  1��FAN\n");
		*fan |= 0x80 >> (8 - fanNum);
		for (int i = 0; i < 8; i++) {
			if (*fan & (0x80 >> i)) {
				printf("%-8s", "ON");
			}
			else {
				printf("%-8s", "OFF");
			}
		}
			break;
	case 2:
		printf("-------------------------------------------------------------------\n");
		printf("8��FAN 7��FAN  6��FAN  5��FAN  4��FAN  3��FAN  2��FAN  1��FAN\n");
		*fan &= (0x80 >> (8 - fanNum) ^ 0xff);
		for (int i = 0; i < 8; i++) {
			if (*fan & (0x80 >> i)) {
				printf("%-8s", "ON");
			}
			else {
				printf("%-8s", "OFF");
			}
		}
		break;
	case 3 : printf("-------------------------------------------------------------------\n");
		printf("8��FAN 7��FAN  6��FAN  5��FAN  4��FAN  3��FAN  2��FAN  1��FAN\n");
		for (int i = 0; i < 8; i++) {
			if (*fan & (0x80 >> i)) {
				printf("%-8s", "ON");
			}
			else {
				printf("%-8s", "OFF");
			}
		}
		break;
	}
	printf("\n-------------------------------------------------------------------\n");
}

void reverseFan(unsigned char *fan)
{
	printf("-------------------------------------------------------------------\n");
	printf("                      Fan ��ü ��ȯ �۾� ���� ȭ��\n");
	printf("-------------------------------------------------------------------\n");
	*fan = ~(*fan);
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�. (ON, OFF ���� �ڹٲ�)\n");
}

void myflush(void)
{
	while (getchar() != '\n') {
		;
	}
}