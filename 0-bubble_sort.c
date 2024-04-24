#include "sord.h"


/**
 * bubble_sort - a Function that sort an array of integers in asending order
 * @array: This is an array of integers to sort
 * @size: This is the size of the array
 *
 * Description: Prints the array after each swap
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j+ i])
			{
				swapping_integer(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}

}


/**
 * swapping_integer - Swappint the two integers in an array
 * @m: this is first integer to swap
 * @l: this is the second integer to swap
 */
void swapping_integer(int *m, int *l)
{
	*m = *m ^ *l;
	*l = *m ^ *l;
	*m = *m ^ *l;
}

