#include <stdio.h>
#include <unistd.h>

/**
 * _puts - prints string followed by new line to stdout
 *
 * @str: string to be printed
 *
 * Return: Nothing
 *
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		putchar(str[length]);
		length++;
	}
	putchar('\n');
}
