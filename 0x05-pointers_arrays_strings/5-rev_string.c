#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 * Return: Nothing
 *
 */
void rev_string(char *s)
{
	int length = 0;
	char *new_string = malloc(length + 1);
	int initial = 0;
	int length_new_str = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	
	while (initial < length)
	{
		new_string[initial] = s[length - initial - 1];
		initial++;
	}

	new_string[length] = '\0';

	while (length_new_str  < length + 1)
	{
		s[length_new_str] = new_string[length_new_str];
		length_new_str++;
	}
}
