#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int num = 0;
	int sum = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum = sum + num;
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
