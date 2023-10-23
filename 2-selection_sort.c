#include "sort.h"
/**
 * selection_sort - use it to sort an array
 *@size: array size
 *@array: just a list
*/

void selection_sort(int *array, size_t size)
{
	size_t j, ind;
	int temp, swp, f = 0;

	if (array == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		temp = j;
		f = 0;
		for (ind = j + 1; ind < size; ind++)
		{
			if (array[temp] > array[ind])
			{
				temp = ind;
				f += 1;
			}
		}
		swp = array[j];
		array[j] = array[temp];
		array[temp] = swp;
		if (f != 0)
			print_array(array, size);
	}
}
