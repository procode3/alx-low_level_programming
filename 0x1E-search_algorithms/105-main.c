#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    listint_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 99, 99, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_list(array, size);
    print_list(list);

    res =  jump_list(list, size, 18);
    printf("Found %d at index: %lu\n\n", 18, res->index);
	res =  jump_list(list, size, 99);
    printf("Found %d at index: %lu\n\n", 99, res->index);
    res =  jump_list(list, size, 61);
    printf("Found %d at index: %lu\n", 61, res->index);

    free_list(list);
    return (EXIT_SUCCESS);
}
