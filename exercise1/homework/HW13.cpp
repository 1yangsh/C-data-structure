#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char sname[20], lname[20];
	printf("���� �Է��Ͻÿ� : ");
	fgets(sname, sizeof(sname), stdin);
	sname[strlen(sname) - 1] = '\0';
	printf("�̸��� �Է��Ͻÿ� : ");
	fgets(lname, sizeof(lname), stdin);
	lname[strlen(lname) - 1] = '\0';
	printf("%s %s\n", sname, lname);
	printf("%*d %*d", strlen(sname), strlen(sname), strlen(lname), strlen(lname));
	return 0;
}