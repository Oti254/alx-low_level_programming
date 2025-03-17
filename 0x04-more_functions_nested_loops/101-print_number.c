#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to display
 *
 * Return: void
 *
 */
void print_number(int n)
{
	int div = 1;
	unsigned int num;

	/* checks if int is negative */
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	/* finds largest divisor */
	while ((num / div) >= 10)
	{
		div *= 10;
	}
	/* prints each digit one by one */
	while (div > 0)
	{
		_putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
}
