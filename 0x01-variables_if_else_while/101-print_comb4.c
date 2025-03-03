#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always Success (0)
 *
 */
int main(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
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
