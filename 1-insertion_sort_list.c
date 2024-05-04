#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;
	listint_t *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = *list;

	while (curr != NULL)
	{
		temp = curr;
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			listint_t *prev_temp = temp->prev;

			if (temp->next != NULL)
				temp->next->prev = prev_temp;
			if (prev_temp->prev != NULL)
				prev_temp->prev->next = temp;
			else
				*list = temp;
			temp->prev = prev_temp->prev;
			prev_temp->next = temp->next;
			temp->next = prev_temp;
			prev_temp->prev = temp;
			print_list(*list);
		}
		curr = curr->next;
	}
}

