#include "sort.h"

/**
 * selection_sort - sorts an array of ints with selection sort
 *
 * @array: the array being sorted
 * @size: the size of the array being sorted
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, mp;

	for (; i < size - 1; i++)
	{
		mp = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[mp])
				mp = j;

		if (mp != i)
		{
			swap(&array[i], &array[mp]);
			print_array(array, size);
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
