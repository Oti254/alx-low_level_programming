#include <stdio.h>

/**
 * main - prints sum of even num in fibonacci less than 4,000,000
 *
 * Return: Always 0
 *
 */
int main(void)
{

	long int a, b, c;
	long int even, sum;

	a = 1;
	b = 2;
	c = 0;
	sum = 2;
	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			even = c;
			sum = sum + even;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
