#pragma warning (disable : 4996)
#include <stdio.h>
void myflush();

int main()
{
	int score;
	char name[20];
	printf("���� �Է� : ");
	scanf("%d", &score);
	myflush();

	printf("�̸� �Է� : ");
	fgets(name, sizeof(name), stdin);

	printf("���� : %d��, �̸� : %s\n", score, name);
	return 0;
}

void myflush(void)
{
	while(getchar() != '\n'){
		;
	}
	return ;
}

