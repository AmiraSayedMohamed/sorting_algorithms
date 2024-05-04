#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: Array of integers
 * @size: Size of the array
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

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
		if (min_idx != i)
		{
			swap_integers(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap_integers - a function that swap two integers
 * @A: the first integer to swap
 * @B: the second integer to swap
 */

void swap_integers(int *A, int *B)
{
	*A = *A ^ *B;
	*B = *A ^ *B;
	*A = *A ^ *B;
}

