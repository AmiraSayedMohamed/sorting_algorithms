#include "sort.h"
#include <stdlib.h>

/**
 * counting_sort - Sorts an array using the Counting sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 *
 * Description: This function sorts an array of integers in ascending order
 * using the Counting sort algorithm.
 */
void counting_sort(int *array, size_t size)
{
	int *count = NULL, *output = NULL;
	int max = 0;
	size_t i;

	if (size < 2 || !array)
		return;

	/* Find the maximum value in the array */
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	/* Allocate memory for count array and output array */
	count = malloc(sizeof(int) * (max + 1));
	output = malloc(sizeof(int) * size);
	if (!count || !output)
	{
		free(count);
		free(output);
		return;
	}

	/* Initialize count array with zeros */
	for (i = 0; i <= (size_t)max; i++)
		count[i] = 0;

	/* Store the count of each element in count array */
	for (i = 0; i < size; i++)
		count[array[i]]++;

	/* Modify count array to contain the actual position of elements in output array */
	for (i = 1; i <= (size_t)max; i++)
		count[i] += count[i - 1];

	/* Build the output array */
	for (i = 0; i < size; i++)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}

	/* Copy the sorted elements back to the original array */
	for (i = 0; i < size; i++)
		array[i] = output[i];

	/* Free allocated memory */
	free(count);
	free(output);
}

