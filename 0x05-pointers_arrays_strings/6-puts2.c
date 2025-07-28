#include <stdio.h>

/**
 * puts2 - prints every other character in a string
 *
 * @str: string to be print every other character
 *
 * Return: Nothing
 *
 */
void puts2(char *str)
{
	int index = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (index < len + 1)
	{
		putchar(str[index]);
		index = index + 2;
	}
	putchar('\n');
}
