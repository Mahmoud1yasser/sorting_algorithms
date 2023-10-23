#include "sort.h"

/**
 * swap - swap two integers numbers
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * party - array and using pivot
 * @array: the Array
 * @low_n: integer
 * @high_n: integer
 * @size: size of array (size_t)
 * Return: index of pivote (int)
*/

int party(int *array, int low_n, int high_n, size_t size)
{
	int pivot = array[high_n];
	int i = low_n - 1, j;

	for (j = low_n; j <= high_n; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * Lomuto_partition - Sorting Recursively
 * @array: Array to be sorted
 * @low_n: lowest value
 * @high_n: highest value
 * @size: Array size
 * Return: void
*/

void Lomuto_partition(int *array, int low_n, int high_n, size_t size)
{
	int n;

	if (low_n < high_n)
	{
		n = party(array, low_n, high_n, size);
		Lomuto_partition(array, low_n, n - 1, size);
		Lomuto_partition(array, n + 1, high_n, size);
	}
}
/**
 * quick_sort - Quick Sort
 * @array: Array to be sorted
 * @size: Array size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	Lomuto_partition(array, 0, size - 1, size);
}
