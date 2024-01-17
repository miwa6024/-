#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() 
{
	srand(time(0));

	int a = (rand() % 20) + 1;
	int b = (rand() % 20 - a) + 1;
	int c = 20 - a - b;
	printf("あなたの能力値は\nintelligence > %d\nstamina > %d\ncharisma > %d\n", a, b, c);
	if (a > b && a > c)
	{
		printf("クラスは  mage  です\n");
	}
	if (b > a && b > c)
	{
		printf("クラスは　knight です\n");
	}
	if (c > a && c > b)
	{
		printf("クラスは thief　です");
	}
	return 0;
}
