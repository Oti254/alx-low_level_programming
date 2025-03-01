#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always success (0)
 *
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		if (a == 9)
			break;
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
