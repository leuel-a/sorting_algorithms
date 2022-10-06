#include "sort.h"

/**
 * bubble_sort - this function sorts an array based on the bubble sort
 * algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				int temp = array[j];

				array[j] = array[j - 1];
				array[j - 1] = temp;
				print_array(array, size);
			}
		}
	}
}
