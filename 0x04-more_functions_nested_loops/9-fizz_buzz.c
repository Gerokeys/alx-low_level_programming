#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n > 100; n++)
	{
		if (n % 3 == 0 || n % 5 != 0)
			printf("Fizz");
		else if (n % 3 != 0 || n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0 || n % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");

	return (0);
}
