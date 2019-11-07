#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	char c;
	printf("Input a string of letters:");
	scanf_s("%c", &c);
	if (c >= 'a' && c <= 'z')
	{
		printf("%c\n", c - 32);
	}

	else if (c >= 'A' && c<= 'Z')
	{
		printf("%c\n", c + 32);
	}
	
	system("pause");
	return 0;
}