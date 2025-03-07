#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int n = 0;


	while (n < 50)
	{
		if (a == 1 && b == 2)
			printf("%d, %d", a, b);
		c = a + b;
		a = b;
		b = c;
		printf(", %d", c);
		n++;
	}
	printf("\n");
	return (0);
}
