#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order using the
 *              Shell sort algorithm (Knuth Sequence).
 * @array: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 *
 * Description: Prints the array after each swap.
 */
void shell_sort(int *array, size_t size)
{
    size_t gap = 1, i, j;
    int temp;

    // Calculate the initial gap using Knuth's sequence
    while (gap < size / 3)
        gap = gap * 3 + 1;

    // Start with the largest gap and reduce it
    for (; gap > 0; gap /= 3)
    {
        // Perform insertion sort for elements at each gap interval
        for (i = gap; i < size; i++)
        {
            temp = array[i];
            // Shift elements until correct position for temp is found
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
                array[j] = array[j - gap];
            array[j] = temp;
        }
        print_array(array, size);
    }
}

