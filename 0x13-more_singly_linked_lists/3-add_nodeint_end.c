#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linkedlist
 * @head: pointer to a listint_t list
 * @n: an int
 * Return: address of the added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	while (*head->next != NULL)
	{
		*head = *head->next;
	}

	new->n = n;
	new->next = NULL;
	*head->next = new;

	return (new);
}
