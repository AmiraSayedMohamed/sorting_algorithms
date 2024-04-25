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


void swapping_integer(int *m, int *l);

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array size_t size);


void shell_sort(int *array, size_t size);
/* 100-shell_sort.c */
void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void sort_deck(deck_node_t **deck);

/* Function prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
int hoare_partition(int *array, size_t size, int left, int right);

/* 3-quick_sorct.c*/
int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left, int right);
void quick_sort_hoare(int *array, size_t size);

/* 103-merge_sort.c */
void print_left_right(int *array, int size, int first, int mid);
void merge(int *array, int size, int first, int mid, int *cpy);
void mergeSort(int *cpy, int first, int size, int *array);
void copy_array(int *arr, int *cpy, int size);
void merge_sort(int *array, size_t size);

#endif /* SORT_H_H */
