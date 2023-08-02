#include "lists.h"

/**
 *
 * free_listint - FREEs a listint_t list
 * @head: THE pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
