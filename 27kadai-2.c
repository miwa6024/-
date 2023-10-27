#include<stdio.h>

int main(void)
{
	int a;

	printf("Please Enter Number: ");
	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("%dは偶数です", a);
	}
	else {
		printf("%dは奇数です", a);
	}

	return 0;
}
