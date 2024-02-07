#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using LS
 * @array: pointer to the array to search
 * @size: size of the array to search
 * @value: value to search in the array
 * Return: first index where value is located, -1 if none
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
	}
	return (-1);
}
