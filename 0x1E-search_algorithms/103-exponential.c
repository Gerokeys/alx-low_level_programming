#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search2 - searches for a value in an array using BS
 * @array: pointer to the array to search
 * @left:  beginnig of an array
 * @right: end of an array
 * @value: value to search for
 * Return: index where the value is created
 */
int binary_search2(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches a value using ES
 * @array: array to search
 * @size: size of the array to search
 * @value: value to search in the array
 * Return: first index where the value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	/*
	 * Dividing i by 2 effectively finds the midpoint
	 * between the previous value of i (the last index you
	 * checked) and the current value of i
	 */
	return (binary_search2(array, i / 2, right, value));
}
