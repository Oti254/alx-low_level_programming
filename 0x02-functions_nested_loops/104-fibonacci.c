#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 *
 */
int main(void)
{
	unsigned long int a, b, c;
	unsigned long int a_high, a_low, b_high, b_low, c_high, c_low;
	int n = 0;

	a = 1;
	b = 2;

	printf("%lu, %lu", a, b);
	n = 2;
	while (n < 92)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
		n++;
	}
	a_high = a / 1000000000;
	a_low = a % 1000000000;
	b_high = b / 1000000000;
	b_low = b % 1000000000;
	while (n < 98)
	{
		c_high = a_high + b_high + ((a_low + b_low) / 1000000000);
		c_low = (a_low + b_low) % 1000000000;
		printf(", %lu%09lu", c_high, c_low);
		a_high = b_high;
		a_low = b_low;
		b_high = c_high;
		b_low = c_low;
		n++;
	}
	printf("\n");
	return (0);
}
