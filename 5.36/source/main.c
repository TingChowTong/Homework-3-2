#include <stdio.h>
#include <stdlib.h>

void towers(int n, char A, char B, char C);

int main()
{
	int num;
	printf("Enter amount of disks:");
	scanf_s("%d", &num);
	towers(num, 'A', 'B', 'C');
	system("pause");
	return 0;
}

void towers(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("Move 1 disk from %c to %c\n", A, B);
		return;
	}
	towers(n - 1, A, C, B);
	printf("Move disk %d from %c to %c\n", n, A, B);
	towers(n - 1, C, B, A);
}