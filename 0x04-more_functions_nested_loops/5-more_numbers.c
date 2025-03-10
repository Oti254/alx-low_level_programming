#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int n = 0;
	int a = 0;

	while (n < 11)
	{
		a = 0;
		while (a < 15)
		{
			if (a > 10)
				_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			a++;
		}
		_putchar('\n');
		n++;
	}
}
