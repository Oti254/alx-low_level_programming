#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: Always 0
 *
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int n = 0;


	printf("%ld, %ld", a, b);
	while (n < 48)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %ld", c);
		n++;
	}
	printf("\n");
	return (0);
}
