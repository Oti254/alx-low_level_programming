#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 *
 * Return: Always 0
 *
 */
int main(void)
{

	int n = 1;

	while (n < 101)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			if (n == 1)
				printf("%d", n);
			else
			printf(" %d", n);
		}
		n++;

	}
	printf("\n");
	return (0);
}
