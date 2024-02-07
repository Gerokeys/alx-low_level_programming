#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - searches value in a sorted arr,use IS
 * @array: array to search for
 * @size: size of the array
 * @value: value to search for in the array
 * Return: first index where the value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t j;
	size_t l = 0;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		j = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (j < size)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", j);
			break;
		}
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			r = (j - 1);
		else
			l = (j + 1);
	}
	return (-1);
}
