#include <stdio.h>
#include "search_algos.h"
/**
 * binary_recursion - searches for a value recursively
 * @array: array to search
 * @left: begining of an array/sub-array - index
 * @right: end of an array/subarray = index
 * @value: value of an array to search for
 * Return: index of the found value, -1 if not found
 */
int binary_recursion(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (j = left; j < right; j++)
		printf("%d, ", array[j]);
	printf("%d\n", array[j]);

	j = left + (right - left) / 2;
	if (array[j] ==  value && (j == left || array[j - 1] != value))
		return (j);
	if (array[j] >= value)
		return (binary_recursion(array, left, j, value));
	return (binary_recursion(array, j + 1, right, value));
}

/**
 * advanced_binary - searches a value in a sorted arr of ints
 * @array: array to search for the value
 * @size: size of the array to search
 * @value: value to search for
 * Return: index of the searched value
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_recursion(array, 0, size - 1, value));
}
