#pragma warning (disable : 4996)
#include <stdio.h>
double input(void);
void output(double);

int main()
{
	double f, c;
	f = input();
	c = 5.0 / 9 * (f - 32);
	output(c);

	return 0;
}

double input(void)
{
	double f;
	printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%lf", &f);
	return f;
}

void output(double c)
{
	printf("¼·¾¾ ¿Âµµ´Â %.1lf µµ ÀÔ´Ï´Ù.", c);
}