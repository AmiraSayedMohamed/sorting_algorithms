#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_left_right - Print left and right partitions.
 * @array: Array to print.
 * @size: Size of the array.
 * @first: Initial position.
 * @mid: Middle position.
 */
void print_left_right(int *array, int size, int first, int mid)
{
    int k;

    printf("Merging...\n");
    printf("[left]: ");
    for (k = first; k < mid; k++)
    {
        if (k != mid - 1)
            printf("%d, ", array[k]);
        else
            printf("%d\n", array[k]);
    }

    printf("[right]: ");
    for (k = mid; k < size; k++)
    {
        if (k < size - 1)
            printf("%d, ", array[k]);
        else
            printf("%d\n", array[k]);
    }
}

/**
 * merge - Merge the values in the position of the array.
 * @array: First array.
 * @size: Size of the second array.
 * @cpy: Copy of the array.
 * @first: Initial position.
 * @mid: Middle position.
 *         First one of the second array.
 */
void merge(int *array, int size, int first, int mid, int *cpy)
{
    int i = first, j = mid, k;

    print_left_right(array, size, first, mid);

    printf("[Done]: ");
    for (k = first; k < size; k++)
    {
        if (i < mid && (j >= size || array[i] <= array[j]))
            cpy[k] = array[i++];
        else
            cpy[k] = array[j++];

        if (k < size - 1)
            printf("%d, ", cpy[k]);
        else
            printf("%d\n", cpy[k]);
    }
}

/**
 * mergeSort - Array separator.
 * @cpy: Copy of the array.
 * @first: Initial position.
 * @size: Size of the original array.
 * @array: The original array.
 */
void mergeSort(int *cpy, int first, int size, int *array)
{
    int mid;

    if (size - first < 2)
        return;

    mid = (size + first) / 2;

    mergeSort(array, first, mid, cpy);
    mergeSort(array, mid, size, cpy);

    merge(cpy, size, first, mid, array);
}

/**
 * copy_array - Copy array of int.
 * @arr: Array source.
 * @cpy: Array destination.
 * @size: Array size.
 */
void copy_array(int *arr, int *cpy, int size)
{
    int i;

    for (i = 0; i < size; i++)
        cpy[i] = arr[i];
}

/**
 * merge_sort - Create partition and copy.
 * @array: Array.
 * @size: Array size.
 */
void merge_sort(int *array, size_t size)
{
    int *cpy;

    cpy = malloc(sizeof(int) * size);

    if (cpy == NULL)
        return;

    copy_array(array, cpy, size);

    mergeSort(cpy, 0, size, array);
    free(cpy);
}

