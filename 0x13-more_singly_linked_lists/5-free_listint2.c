#include "lists.h"

/**
 * free_listint2 - frees memory of a linkedlist
 * @head: pointer to 1st elem of a linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return;

	while (temp)
	{
		*head = temp;
		temp = temp->next;
		free(*head);
	}
	*head = NULL;
}
