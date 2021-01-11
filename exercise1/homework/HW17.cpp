#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	char name[20];
	char gender;
	double height;
	printf("# 성명 입력 : ");
	fgets(name, sizeof(name), stdin);
	printf("# 키 입력(cm단위) : ");
	scanf("%lf", &height);
	printf("# 성별 입력(M/F) : ");
	fflush(stdin);
	gender = getchar();
	if (gender == 'M') {
		char x[20] = "남성";
	}
	else if (gender == 'F') {
		char x[20] = "여성";
	}
	printf("%s씨의 키는 %.1lfcm 이고 %s입니다\n", name, height, gender);
	return 0;
}