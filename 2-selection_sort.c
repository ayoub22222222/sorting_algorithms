#include "sort.h"
/**
 * swap_el - function that swip values
 * @val1: intger one
 * @val2: int two
 * Return: nothing just swap element
*/

void swap_el(int *val1, int *val2)
{
	int temp;

	temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

/**
 * selection_sort - function that sort a list
 * @array: a sequence of integer
 * @size: represent the len of an array
 * Return: nothing sort an unsorted array
*/
void selection_sort(int *array, size_t size)
{
	int i;
	int j;
	int k;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
	for (j = k = i; j < size; j++)
	{
	if (array[j] < array[k])
	k = j;
	}
	swap_el(&array[i], &array[k]);
	print_array(array, size);
	}
}
