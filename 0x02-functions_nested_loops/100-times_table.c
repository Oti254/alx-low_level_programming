#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n:  number of the times table
 *
 * Return: void
 *
 */
void print_times_table(int n)
{
	int a, b, prod;

	if (n >= 0 && n < 15)
	{
		a = 0;
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				prod = (a * b);
				if (b != 0)
				{
					_putchar(','), _putchar(' ');
					if (prod < 10)
						_putchar(' '), _putchar(' ');
					else if (prod < 100)
						_putchar(' ');
				}
				if (prod <= 9)
					_putchar('0' + prod);
				else if (prod > 9 && prod < 100)
					_putchar((prod / 10) + '0'), _putchar((prod % 10) + '0');
				else if (prod > 99)
				{
					_putchar((prod / 100) + '0'), _putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
				b++;
			}
			_putchar('\n'), a++;
		}
	}
}
