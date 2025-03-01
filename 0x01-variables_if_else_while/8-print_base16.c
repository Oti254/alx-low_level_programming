#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always success (0)
 *
 */
int main(void)
{
	char c;
	char b;

	c = 48;
	b = 97;
	while (c < 58)
	{
		putchar(c);
		c++;
	}
	while (b < 103)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
