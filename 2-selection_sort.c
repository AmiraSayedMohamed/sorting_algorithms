#include "sort.h"

/**
 * selection_sort - A function that sorcts an array of integers in asending order
 * using the selection sort algorithm
 * @array: This is an array of integers
 * @size: This is the size of the array
 *
 * Desription: Prints the array after each swap
 */

void selection_sort(int *array, size_t size)
{
	size_t, i, j, min_idx;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if(min_idx != i) {
		swappint_integer(&array[min_idx], &array[i]);
		print_array(array, size)
		}
	}
}
