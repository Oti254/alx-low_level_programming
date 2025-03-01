#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits
 *
 * Return: Always success (0)
 *
 */
int main(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');

			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
