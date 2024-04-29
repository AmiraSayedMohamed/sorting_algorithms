#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                        in ascending order using insertion sort algorithm
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		while (temp->previous != NULL && temp->m < temp->previous->m)
		{
			if (temp->next != NULL)
				temp->next->previous = temp->previous;
			temp->previous->next = temp->next;
			temp->next = temp->previous;
			temp->previous = temp->next->previous;
			temp->next->previous = temp;
			if (temp->previous == NULL)
				*list = temp;
			else
				temp->previous->next = temp;
			print_list(*list);
		}
	}
}

