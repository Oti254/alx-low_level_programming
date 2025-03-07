#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
