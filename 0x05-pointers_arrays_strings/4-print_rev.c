#include <unistd.h>
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 *
 * @s: string to be printed
 *
 * Return: Nothing
 *
 */
void print_rev(char *s)
{
	int length = 0;
	int len;

	while (s[length] != '\0')
	{
		length++;
	}

	len = length;
	while (len >= 0)
	{
		write(1, &s[len], 1);
		len--;
	}
	write(1, "\n", 1);
}
