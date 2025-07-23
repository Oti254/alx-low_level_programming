#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 *
 * @s: string evaluated
 *
 * Return: Integer number length
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
