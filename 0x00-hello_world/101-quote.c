#include <stdio.h>

/**
 * main - prints to stderr
 *
 * Return: 1
 *
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", str);
	return (1);
}
