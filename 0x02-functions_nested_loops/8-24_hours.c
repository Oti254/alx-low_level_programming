#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, 00:00 - 23:59
 *
 * Return: Nothing
 *
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a < 3)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				c++;

			}
			b++;
			if (a == 2 && b == 4)
				break;
		}
		a++;
	}
}
