#include "sort.h"

/**
 * hoare_partition - Order a subset of an array of integers according to  the 
 * Hoare partition shceme(first element as pivot)
 * @array: The array of integers
 * @size: the size of the array
 * @right: The ending index of the subset to order
 *
 * Return: the final partition index
 */

int hoare_partition(int *array, size_t size, int left, int right)
{
	int pivot, i = left - 1, j = right + 1;

	pivot = array[left];

	while (1)
	{
		do {
		i++;
		} while (array[i] < pivot);

		do {
		j--;
		} while (array[j] > pivot);

		if (i >= j)
			return j;

		swappint_integer(&array[i], &array[j]);
		print_array(array, size);
	}
}

/**
 * hoare_sort - Implement the quicksort algorithm through recursion
 * @array: An array of integers to sort
 * @size: The size of the array
 * @left: The starting index of the array partition  to order
 * @right: The ending index of the array  partition to order
 *
 * Description: Uses the hoare partition scheme
 */

void hoare_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (left < right)
	{
		part = hoare_partition(array, size, left, right);
		hoare_sort(array, size, left, part);
		hoare_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Sorts an array of integer in ascending order using 
 * quick sort algorithm
 * @array: An array of integers
 * @size: The size of the array
 *
 * Description: Uses the Hoare partition scheme, Prints
 * the array after each swap of swap of two elements
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	hoare_sort(array, size, 0, size - 1);
}
