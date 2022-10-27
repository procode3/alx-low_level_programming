#include "lists.h"

/**
 * free_listint2 - frees memory of a linkedlist
 * @head: pointer to 1st elem of a linked list
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		*head = NULL;

	while (*head)
	{
		
		*head = (*head)->next;
		free(*head);
	}

	*head = NULL;
}
