#include <stdio.h>

/**
 * main -  prints all possible different combinations of two two digits
 *
 * Return: Always success (0)
 *
 */
int main(void)
{
	int a = 0;
	int b;
	int c = 0;
	int d;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a;
			while (c < 10)
			{
				d = (c == a) ? b + 1 : 0;
				while (d < 10)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (!(a == 9 && b == 8 && c == 9 && d == 9))
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

