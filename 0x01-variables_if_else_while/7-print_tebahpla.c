#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Return: Always success (0)
 *
 */
int main(void)
{
	char c;

	c = 122;
	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
