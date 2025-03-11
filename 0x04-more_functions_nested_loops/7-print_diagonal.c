#include "main.h"

/**
 * print_diagonal - draws diagonal line on terminal
 * @n: number of times diagonal should be printed
 *
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int line;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		line = 0;
		while (line < n)
		{
			space = 0;
			while (space < line)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
}
