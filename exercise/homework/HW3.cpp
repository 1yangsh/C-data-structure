#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int sec = 54321;
	int hour, min;
	hour = sec / 3600;
	sec = sec % 3600;
	min = sec / 60;
	sec = sec % 60; 
	
	printf("54321초는 %d시간 %d분 %d초 입니다.\n", hour, min, sec);
	return 0;
}