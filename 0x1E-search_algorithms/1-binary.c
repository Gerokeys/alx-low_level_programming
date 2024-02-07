#include <stdio.h>
#include "search_algos.h"
/**
 * print_array - prints the subarray everytime it is searched
 * @array: pointer to the array to be searched
 * @start: beginning of an array
 * @end: end of an array
 * Return: nothing
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array using BS
 * @array: pointer to the array to search
 * @size: size of the array to search
 * @value: the value to search in an array
 * Return: index where the value is created
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		print_array(array, left, right);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
