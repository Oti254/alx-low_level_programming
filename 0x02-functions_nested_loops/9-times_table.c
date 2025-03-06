#include "main.h"

/**
 * times_table - prints the 9 times table, 0 starting
 *
 * Return: void
 *
 */
void times_table(void)
{
	int a = 0;
	int b;
	int prod;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			prod = (a * b);
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}
			if (prod < 10)
				_putchar(prod + '0');
			else
				if (prod >= 10)
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
