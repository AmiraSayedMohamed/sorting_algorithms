#include "sort.h"

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in ascending
 *                      order using the Cocktail shaker sort algorithm.
 * @list: A pointer to a pointer to the head of the list.
 *
 * Description: Swaps the nodes themselves, not just the integer values.
 * Prints the list after each swap.
 */
void cocktail_sort_list(listint_t **list)
{
    listint_t *start = NULL, *end = NULL;
    int swapped = 0;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    do {
        swapped = 0;
        for (start = *list; start->next != end; start = start->next)
        {
            if (start->n > start->next->n)
            {
                swap_nodes(start, start->next, list);
                swapped = 1;
                print_list(*list);
            }
        }
void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list)
        if (swapped == 0)
            break;

        swapped = 0;
        for (end = start; end != *list; end = end->prev)
        {
            if (end->n < end->prev->n)
            {
                swap_nodes(end->prev, end, list);
                swapped = 1;
                print_list(*list);
            }
        }
    } while (swapped);
}

/**
 * swap_nodes - Swaps two nodes in a doubly linked list.
 * @node1: First node to swap.
 * @node2: Second node to swap.
 * @list: A pointer to a pointer to the head of the list.
 */
void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list)
{
    if (node1 == NULL || node2 == NULL || list == NULL || *list == NULL)
        return;

    if (node1->prev != NULL)
        node1->prev->next = node2;
    else
        *list = node2;

    if (node2->next != NULL)
        node2->next->prev = node1;

    node1->next = node2->next;
    node2->prev = node1->prev;
    node1->prev = node2;
    node2->next = node1;
}

