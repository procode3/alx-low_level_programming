#include "lists.h"

/**
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while(head->next)
	{
		head = head->next;
		free(current);
	}
}
