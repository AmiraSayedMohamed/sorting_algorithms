#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * enum my_bool - Enumeration, of Boolean values
 * @false: Equals 0
 * @true: Equals 1
 */
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

/* print_array.c*/
void print_array(const int *array, size_t size);
/* print_list.c*/
void print_list(const listint_t *list);

/* 2-selection_sort.c */
void insertion_sort_list(listint_t **list);
void swap_integers(int *a, int *b);

/* 0-bubble_sort.c*/
void bubble_sort(int *array, size_t size);

void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list);
void cocktail_sort_list(listint_t **list);


/* 103-merge_sort.c */
void print_left_right(int *array, int size, int first, int mid);
void merge(int *array, int size, int first, int mid, int *cpy);
void mergeSort(int *cpy, int first, int size, int *array);
void copy_array(int *arr, int *cpy, int size);
void merge_sort(int *array, size_t size);
#endif /* SORT_H */

