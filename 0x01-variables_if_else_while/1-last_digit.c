#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - checks the last digit of rand number
 *
 * Return: Always success (0)
 *
 */
int main(void)
{
	int n;
	int last_digit;
	char str[] = "and is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = (n % 10);

	if (last_digit > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, last_digit);
	}
	if (last_digit < 6 && last_digit != 0)
	{
		printf("The last digit of %d is %d %s\n", n, last_digit, str);
	}
	return (0);
}
