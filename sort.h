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

/* Function prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);

#endif /* SORT_H_H */

