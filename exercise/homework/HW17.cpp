#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	char name[20];
	char gender;
	double height;
	printf("# ���� �Է� : ");
	fgets(name, sizeof(name), stdin);
	printf("# Ű �Է�(cm����) : ");
	scanf("%lf", &height);
	printf("# ���� �Է�(M/F) : ");
	fflush(stdin);
	gender = getchar();
	if (gender == 'M') {
		char x[20] = "����";
	}
	else if (gender == 'F') {
		char x[20] = "����";
	}
	printf("%s���� Ű�� %.1lfcm �̰� %s�Դϴ�\n", name, height, gender);
	return 0;
}