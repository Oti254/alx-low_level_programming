#include <stdio.h>
#include <stdlib.h>

/**
 * swap_int - swaps values of two integers
 *
 * @a: swapped to b
 * @b: swapped to a
 *
 * Return: Nothing
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
