#include "sort.h"

/**
 * quick_sort - this function will sort an array using
 * the Quick Sort Algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	lomuto_sort(array, size, 0, size - 1);
}

/**
 * lomuto_partition - this function will partition an array using the
 * lomuto partition scheme
 *
 * @array: the array to be partitoned
 * @size: the size of the array
 * @start: start of the partition
 * @end: end of the partition
 *
 * Return: Nothing
 */
size_t lomuto_partition(int *array, size_t size, int start, int end)
{
	int tempPivot, i, pivot;

	tempPivot = start - 1;
	pivot = array[end];
	for (i = start; i < end - 1; i++)
	{
		if (array[i] <= pivot)
		{
			tempPivot++;
			swap(&array[tempPivot], &array[i]);
			print_array(array, size);
		}
	}
	tempPivot++;
	swap(&array[tempPivot], &array[end]);
	print_array(array, size);
	return (tempPivot);
}

/**
 * swap - this function swaps two values of an array
 *
 * @a: the first value
 * @b: the second value
 *
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_sort - this function will sort an array using the
 * Quick Sort Algorithm implementing the lomuto partitioning
 * scheme
 *
 * @array: the array to be sorted
 * @size: the size of the array
 * @start: start of the partition
 * @end: end of the partition
 *
 * Return: Nothing
 */
void lomuto_sort(int *array, size_t size, int start, int end)
{
	int pIndex;

	if (start < end)
	{
		pIndex = lomuto_partition(array, size, start, end);
		lomuto_sort(array, size, start, pIndex - 1);
		lomuto_sort(array, size, pIndex + 1, end);
	}
}
