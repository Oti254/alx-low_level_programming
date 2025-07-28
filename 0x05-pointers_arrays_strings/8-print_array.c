#include <stdio.h>
#include <unistd.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array of integers
 * @n: number of elements to print
 *
 * Return: Nothing
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
