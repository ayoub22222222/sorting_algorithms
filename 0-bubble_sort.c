#include "sort.h"

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



/**
 * bubble_sort - this function take two param as an argument
 * @array: array of integer
 * @size: is an intgere that represent the len of the array
 * Return: nothing help us to sort an unsorted list
*/

void bubble_sort(int *array, size_t size)
{
	int i, j;
	int flag = 0;

	if (size < 2)
	return;

	for (i = 0; i < size - 1; i++)
	{
	for (j = 0; j < size - 1 - i; j++)
	{
	if (array[j] > array[j + 1])
	{
	swap(&array[j], &array[j + 1]);
	print_array(array, size);
	flag = 1;
	}
	}
	if (flag == 0)
	return;

	}
}
