#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the fisrt elem of listint_t list
 * @idx: index to insert new node
 * @n: integer
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *pre;
	listint_t *temp = *head;
	unsigned int counter = 0, counter2 = 0, i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	pre = malloc(sizeof(listint_t));
	if (!pre)
	{
		return (NULL);
	}
	while (*head)
	{
		*head = (*head)->next;
		i++;
	}
	if (i < idx || !(*head))
	{
		return (NULL);
	}
	while ((*head) && (counter < idx))
	{
		temp = (*head)->next;
		counter++;
	}
	new->n = n;
	new->next = temp;
	while ((*head) && (counter2 < (idx - 1)))
	{
		pre = (*head)->next;
		counter2++;
	}
	pre->next = new;
	return (new);
}
