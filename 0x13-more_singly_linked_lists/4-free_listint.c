#include "lists.h"

/**
 * free_listint - FREES A LISt LISTINT_T LIST
 *
 * @head: pointer to head of list
 *
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
