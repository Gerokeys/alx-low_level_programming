#include "search_algos.h"
#include <math.h>
/**
 * jump_list - function that searches for value usinf JS(LL)
 * @list: pointer to the head of the linked list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the node that contains the value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, k, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);
	m = (size_t)sqrt((double)size); /*block size*/
	index = 0; /*represents current index being checked*/
	k = 0; /*counter for the no. of blocks*/

	/**
	 * do-while loop continues iterating as long as
	 * index is less than the size of the list
	 * there is a next node in the list(list->next is not
	 * NULL, the value of the current node (list->n) is
	 * less than the target value
	 */
	do {
		prev = list;
		/**
		 * stores the current node (list) in the prev
		 * variable before advancing to the next node
		 */
		k++;
		index = k * m;
		/*calculate new value of index based on m*/
		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && index != list->index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	} while (index < size && list->next && list->n < value);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);
	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
