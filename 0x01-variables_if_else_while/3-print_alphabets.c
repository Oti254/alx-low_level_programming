#include <stdio.h>

/**
 * main - prints lowercase alphabet followed by uppercase
 *
 * Return: Always Success (0)
 *
 */
int main(void)
{
	char a;
	char A;

	a = 97;
	A = 65;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (A < 91)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
