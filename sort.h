#ifndef SORT_H_H
#define SORT_H_H

#include <stdlib.h>
#include <stdio.h>

typedef enum bool
{
    false = 0, true
} bool;

/* A comparison direction macros for bitonic sorting */
#define UP 0
#define DOWN 1

/**
 * struct listint_s - Double linked list node
 *
 * @m: this is an integer Stord in the node
 * @previous: A Pointer to previous element of the list
 * @next: A Pointer to the next element of the list
 */
typedef struct listint_s
{
    int m;
    struct listint_s *previous;
    struct listint_s *next;
} listint_t;

<<<<<<< HEAD

void swapping_integer(int *m, int *l);

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array size_t size);


void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void sort_deck(deck_node_t **deck);
=======
/* Function prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
>>>>>>> 1ba5a955df4063879168f619f9beb4632e1acf8e

#endif /* SORT_H_H */

