#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: void
 *
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
