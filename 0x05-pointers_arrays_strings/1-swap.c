#include"main.h"
/**
 * swap_int - function to swap the value of two intgers
 * @a: first integer
 * @b: second integer
 * Return: n
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
