#include "lists.h"

/**
 * sum_listint - functions that sums all data in a listint_t list
 * @head: pointer to 1st node of listint_t list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	size_t sum = 0;

	if (!head)
		return (0);

	while (head->next != NULL)
	{
		head = head->next;
		sum += head->n;
	}

	return (sum);
}
