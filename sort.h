#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* Custom boolean type */
typedef enum my_bool
{
     false = 0, true
} my_bool;

/**
 * struct listint_s - Double linked list node
 *
 * @n: Integer stored in the node
 * @prev: A Pointer to previous element of the list
 * @next: A Pointer to the next element of the list
 */
typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list);
void cocktail_sort_list(listint_t **list);

#endif /* SORT_H */

