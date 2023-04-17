#include "search_algos.h"
listint_t *line_search(listint_t *list, size_t size, int value);

/**
 * jump_list - linear jump list algorithm
 * @size: size of singly-linked list
 * @value: value to be looked for
 * @list: singly linked list
 * Return: pointer to found node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp = list;
	size_t y, i, jump_step = sqrt(size);

	i = jump_step;

	if (list == NULL)
		return (NULL);

	while (i < size)
	{
		temp = temp->next->next->next->next;
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		if (temp->n >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - jump_step, i);
			return (line_search(list, jump_step, value));
		}
		else if (temp->n < value && size - i <= jump_step)
		{
			while (temp->next)
			{
				temp = temp->next;
			}
			list = list->next->next->next->next;
			y = temp->index;
			printf("Value checked at index [%ld] = [%d]\n", y, temp->n);
			printf("Value found between indexes [%ld] and [%ld]\n", list->index, y);
			return (line_search(list, jump_step, value));
		}
		list = list->next->next->next->next;
		i += jump_step;
	}
	return (NULL);
}

/**
 * line_search - linear search algorithm
 * @size: size of array
 * @value: value to be searched in the array
 * @list: singly linked list
 * Return: pointer to found node or NULL
 */

listint_t *line_search(listint_t *list, size_t size, int value)
{
	size_t i = 0;

	while (list && i < size)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		i += 1;
		list = list->next;
	}
	return (NULL);
}
