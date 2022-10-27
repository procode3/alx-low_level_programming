#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @index:  index of the node, starting at 0
 * @head: pointer to head node of listint_t
 * Return: nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	if (!head)
		return (NULL);

	while (n < index)
	{
		head = head->next;
	}

	if (!head)
	{
		return (NULL);
	}
	return (head)
}
