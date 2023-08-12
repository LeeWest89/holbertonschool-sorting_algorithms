#include "sort.h"
#include "swap.c"

/**
 */

int partition(int *array, size_t size, int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);
	return (i);
}

/**
 */
void quick_sort_recursion(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, size, low, high);
		quick_sort_recursion(array, size, low, pivot - 1);
		quick_sort_recursion(array, size, pivot + 1, high);
	}
}

/**
 * void quick_sort - sorts an array of integers with Quick sort
 *
 * @array: the array being sorted
 * @size: the sizeof the array
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, size, 0, size - 1);
}
