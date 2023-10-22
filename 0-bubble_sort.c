#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm.
 * @array: pointer to unsorted array.
 * @size: number of items of the array.
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;
	int temp, swap;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1 - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			return;
	}
}
