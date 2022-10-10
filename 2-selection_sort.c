#include "sort.h"

/**
 * selection_sort - this function sorts an array using the
 *	selection sort algorithm
 *
 * @array: the array to be sorted
 * @size: size of the array to be sorted
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int i, j;

	for (i = 0; i < (int)size; i++)
	{

		int jMin = i;

		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[jMin])
			{
				jMin = j;
			}
		}
		if (jMin != i)
			swap_int(&array[i], &array[jMin]);
		print_array(array, size);
	}
}

/**
 * swap_int - swaps the position of two elements in the array
 *
 * @xp: the first element to be swapped
 * @yp: the second elemet to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
