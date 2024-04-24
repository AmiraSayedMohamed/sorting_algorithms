#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list = NULL, *node = NULL;
	int *tmp;

	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->m;
		*tmp = array[size];
		node->next = list;
		node->previous = NULL;
		list = node;
		if (list->next)
			list->next->previous = list;
	}
	return (list);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	printf("Original array:\n");
	print_array(array, n);

	printf("\nSorting array using bubble sort...\n");
	bubble_sort(array, n);

	printf("\nSorted array:\n");
	print_array(array, n);

	printf("\nCreating doubly linked list from the array...\n");
	list = create_listint(array, n);
	if (!list)
	{
		fprintf(stderr, "Failed to create list\n");
		return (1);
	}

	printf("\nOriginal list:\n");
	print_list(list);

	printf("\nSorting list using insertion sort...\n");
	insertion_sort_list(&list);

	printf("\nSorted list:\n");
	print_list(list);

	return (0);
}

