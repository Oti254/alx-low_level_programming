#include <stdio.h>
#include <stdlib.h>

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
	fputs(str, stdout);
	fputc('\n', stdout);
}
