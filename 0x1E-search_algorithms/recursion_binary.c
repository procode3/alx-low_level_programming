// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, size_t size)
{
    size_t i;
    printf("Searching in array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

int binary_search(int *array, size_t size, int value)
{   
    int idx;
    size_t mid;
    if (size == 0)
        return -1;
    printArray(array, size);
    mid = (size -1)/2;
    
    if(array[mid] == value)
        return mid;
    else if(array[mid] > value)
        return (binary_search(array, mid, value));
    else if (array[mid] < value)
    {
        idx = binary_search(array + mid + 1 , size - mid - 1, value);
        if (idx != -1)
            return idx + mid + 1;
    }
}

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);
    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, ));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
