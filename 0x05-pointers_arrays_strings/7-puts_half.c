#include <stdio.h>
#include <unistd.h>

/**
 * puts_half - prints second half of a string
 *
 * @str: string to be printed
 *
 * Return: Nothing
 *
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 == 0)
	{
		n = (length_of_the_string / 2);
	}
	else
	{
		n = (length_of_the_string + 1) / 2;
	}
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, "\n", 1);
}
