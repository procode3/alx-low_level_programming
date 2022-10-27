#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to pointer of head node in a listint_t list
 *
 * Return: data in the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (!(*head))
	{
		return (NULL);
	}


	temp = *head;
	*head = *head->next;

	temp->next = NULL;

}
