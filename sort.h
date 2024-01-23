#ifndef SORTING_H
#define SORTING_H

#include <stdlib.h>
#include <stdio.h>



/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * swap - is a helper function
 * @val1: intger value number one
 * @val2: intger value number two
 * Return: return nothing its helps us to swap two value
*/

void swap(int *val1, int *val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);





#endif