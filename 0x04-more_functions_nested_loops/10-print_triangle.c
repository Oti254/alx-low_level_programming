#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 *
 */
void print_triangle(int size)
{
	int height;
	int hash;
	int space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		height = 0;
		while (height < size)
		{
			space = size - 1;
			while (space > height)
			{
				_putchar(' ');
				space--;
			}
			hash = 0;
			while (hash <= height)
			{
				_putchar('#');
				hash++;
			}
			_putchar('\n');
			height++;
		}

	}
}
