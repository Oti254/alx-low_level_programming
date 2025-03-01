#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always Success(0)
 *
 */
int main(void)
{
	char a;

	a = 97;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
