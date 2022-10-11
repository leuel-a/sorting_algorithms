#include "sort.h"

/**
 * quick_sort - this function sorts an array using the
 * Quick Sort Algorithm
 *
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int start, end;

	start = 0;
	end = (int)size;

	lomuto_sort(array, size, start, end - 1);
}

/**
 * lomuto_sort - this function sorts array using an array
 * the Quick Sort Algorithm implementing the lomuto partition scheme.
 *
 * @array: the array to be sorted
 * @size: size of the array
 * @start: start of the partition
 * @end: end of the partition
 *
 * Return: Nothing
 */
void lomuto_sort(int *array, size_t size, int start, int end)
{
	int pIndex = 0;

	if (start >= end)
		return;

	pIndex = lomuto_partition(array, size, start, end);
	lomuto_sort(array, size, start, pIndex - 1);
	lomuto_sort(array, size, pIndex + 1, end);
}

/**
 * lomuto_partition - this function partitions an array using the
 * lomuto partition scheme
 *
 * @array: the sub array to be partitioned
 * @size: the size of the array
 * @start: start of the partiton
 * @end: end of the partition
 *
 * Return: On success, it returns the partition index
 */
int lomuto_partition(int *array, size_t size, int start, int end)
{
	int pivot, tempPivot, i;

	pivot = array[end];
	tempPivot = start - 1;
	for (i = start; i < end - 1; i++)
	{
		if (array[i] <= pivot)
		{
			tempPivot += 1;
			swap(&array[tempPivot], &array[i]);
			print_array(array, size);
		}
	}

	tempPivot += 1;
	swap(&array[tempPivot], &array[end]);
	return (tempPivot);
}

/**
 * swap - swaps two value in an array
 *
 * @x: the first element
 * @y: the second element
 *
 * Return: Nothing
 */
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}
