#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a doubly linked list of integers
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
	const listint_t *current = list;

	while (current != NULL)
	{
		printf("%d", current->m);
		if (current->next != NULL)
			printf(", ");
		current = current->next;
	}
	printf("\n");
}

