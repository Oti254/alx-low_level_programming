#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	b = 0;
	while (b < 11)
	{
		a = 97;
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		b++;
	_putchar('\n');
	}
}
