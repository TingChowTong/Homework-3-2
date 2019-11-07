#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a;
	int b;
	int max;
	printf("Please enter two integers:");
	scanf_s("%d %d", &a, &b);
	
	max = (a > b) ? a : b;
	while (1)
	{
		if (max % a == 0 && max % b == 0)
		{
			printf("LCM of %d and %d = %d\n", a, b, max);
			break;
		}
		++max;
	}
	system("pause");
	return 0;
}