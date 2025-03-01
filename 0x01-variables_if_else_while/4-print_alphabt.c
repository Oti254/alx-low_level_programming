#include <stdio.h>

/**
 * main - prints all letters except q and e
 *
 * Return: Always Success (0)
 *
 */
int main(void)
{
	char a;

	a = 97;
	while (a < 123)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
