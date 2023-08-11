#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers using the Bubble sort algorithm
 *
 * @array: the array being sorted
 * @size: sizeof the array
 */

void bubble_sort(int *array, size_t size)
{
	long unsigned int i = 0, j = 0;

	for (; i < size; i++)
	{
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap - swaps two ints in an array
 *
 * @a: first int
 * @b: second int
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
