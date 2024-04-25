#include <stdio.h>
#include "sort.h"

/**
 * sift_down - Performs sift-down operation on heap
 * @array: The array to sort
 * @start: The starting index of the heap
 * @end: The ending index of the heap
 * @size: The size of the array
 */
void sift_down(int *array, size_t start, size_t end, size_t size)
{
	size_t root = start;
	size_t child;
	size_t swap;
	int temp;

	while (2 * root + 1 <= end)
	{
		child = 2 * root + 1;
		swap = root;

		if (array[swap] < array[child])
			swap = child;

		if (child + 1 <= end && array[swap] < array[child + 1])
			swap = child + 1;

		if (swap != root)
		{
			temp = array[root];
			array[root] = array[swap];
			array[swap] = temp;
			print_array(array, size);
			root = swap;
		}
		else
		{
			return;
		}
	}
}

/**
 * heap_sort - Sorts an array of integers in ascending order
 *             using the Heap sort algorithm
 * @array: The array to sort
 * @size: Number of elements in the array
 */
void heap_sort(int *array, size_t size)
{
	size_t start, end;
	int temp;

	if (array == NULL || size < 2)
		return;

	/* Build max heap */
	for (start = (size - 2) / 2; (int)start >= 0; start--)
		sift_down(array, start, size - 1, size);

	/* Heapify and extract elements */
	for (end = size - 1; end > 0; end--)
	{
		temp = array[end];
		array[end] = array[0];
		array[0] = temp;
		print_array(array, size);
		sift_down(array, 0, end - 1, size);
	}
}

