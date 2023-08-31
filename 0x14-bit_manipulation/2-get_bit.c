#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number we ate supposed to search
 * @index: the bit's index
 *
 * Return: thr bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
