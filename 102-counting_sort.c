#include "sort.h"

/**
 * counting_sort - this function will sort an array using the
 * Counting Sort Algorithm.
 *
 * @size: the size of the array
 * @array: the array to be sorted
 *
 * Return: Nothing
 */
void counting_sort(int *array, size_t size)
{
	int max = 0, *count, i, *sorted;
	
	if (size < 2 || !array)
		return;
	max = max_array_element(array, size);
	count = malloc(sizeof(int) * (max + 1));
	sorted = malloc(sizeof(int) * size);

	for (i = 0; i < (int)size; i++)
		count[array[i]]++;
	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];
	count[0] = 0;
	print_array(count, max + 1);

	for (i = 0; i < (int)size; i++)
	{
		sorted[count[array[i]] - 1] = array[i];
		count[array[i]]++;
	}

	for (i = 0; i < (int)size; i++)
		array[i] = sorted[i];

	free(count);
	free(sorted);
}

/**
 * max_array_element - this function will find the maximum element
 * of an array
 *
 * @array: the array to be checked
 * @size: the size of the array
 *
 * Return: The maximum element of the array
 */
int max_array_element(int *array, size_t size)
{
	int max = array[0], i;

	for (i = 1; i < (int)size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}
