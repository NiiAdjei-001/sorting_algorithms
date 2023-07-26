#include"sort.h"
/**
 * selection_sort - selection sort an array in asc order
 * @array: integer array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t  min_idx; /* index of min value */
	int buc; /* bucket to temporarily store value */
	size_t i = 0, j = 0; /* iterators */

	for (; i < size; i++)
	{
		min_idx = i;
		for (j = i; j < size; j++)
		{
			if (array[min_idx] > array[j])
				min_idx = j;
		}
		if (min_idx != i)
		{
			buc = array[i];
			array[i] = array[min_idx];
			array[min_idx] = buc;
			print_array(array, size);
		}
	}
}
