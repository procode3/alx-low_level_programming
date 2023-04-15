#include "search_algos.h"
skiplist_t *line_search(skiplist_t *list, size_t size, int value);

/**
 * jump_list - linear jump list algorithm
 * @size: size of singly-linked list
 * @value: value to be looked for
 * @list: singly linked list
 * Return: pointer to found node or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, size_t size, int value)
{
	skiplist_t *temp = list;
	size_t i, jump_step = sqrt(size);

	i = jump_step;

	if (list == NULL)
		return (NULL);

	while (i < size)
	{
		temp = temp->next->next->next->next;
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		else if (temp->n > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + jump_step);
			return (line_search(list, jump_step, value));
		}
		else if (temp->n < value && size - i <= jump_step)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, size - 1);
			list = list->next->next->next->next;
			return (line_search(list, jump_step, value));
		}
		list = list->next->next->next->next;
		i += jump_step;
	}
	return (NULL);
}

/**
 * linear_search - linear search algorithm
 * @size: size of array
 * @value: value to be searched in the array
 * @list: singly linked list
 * Return: pointer to found node or NULL
 */

skiplist_t *line_search(skiplist_t *list, size_t size, int value)
{
	size_t i = 0;

	while (list && i <= size)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		i += 1;
		list = list->next;
	}
	return (NULL);
}
