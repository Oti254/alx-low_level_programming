#include <stdio.h>

/**
 * main - finds and prints the largest factor of a number
 *
 * Return: Always 0
 *
 */
int main(void)
{
	long int num = 612852475143;
	long int i;

	while (num % 2 == 0)
	{
		num = num / 2;
	}
	i = 3;
	while (i * i <= num)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
		i += 2;
	}
	if (num > 2)
		printf("%ld", num);
	printf("\n");
	return (0);
}
