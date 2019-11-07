#include <stdio.h>
#include <stdlib.h>

int h(int a, int b);

int main(void)
{
	int base;
	int power;
	printf("Enter two intergers(base & exponent):");
	scanf_s("%d %d", &base, &power);

	printf("Result=%d\n", h(base, power));
	system("pause");
	return 0;
}

int h(int a, int b)
{
	int i;
	int n;
	n = 1;
	for (i = 1; i <= b; i++)
	{
		n = n * a;
	}
	return n;
}