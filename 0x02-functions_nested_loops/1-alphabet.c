#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Nothing
 *
 */
void print_alphabet(void)
{

	char a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
