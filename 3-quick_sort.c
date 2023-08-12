#include "sort.h"
#include "swap.c"

/**
 * partition - partitions the array
 *
 * @array:the array to be sorted
 * @size: the size of the array
 * @low: the first element of the array
 * @high: the last element of the array
 *
 * Return: returns i
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
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort_recursion - sorts recursively
 *
 * @array:the array to be sorted
 * @size: the size of the array
 * @low: the first element of the array
 * @high: the last element of the array
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
 * quick_sort - sorts an array of integers with Quick sort
 *
 * @array: the array being sorted
 * @size: the sizeof the array
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, size, 0, size - 1);
}
