#include"sort.h"
/**
 * bubble_sort - Bubble sort an array in asc order
 * @array: integer array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int buc; /* bucket for temporary storage */
	size_t i = 0, j = 0; /* iterators */

	for (; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				buc = array[j];
				array[j] = array[j + 1];
				array[j + 1] = buc;
				print_array(array, size);
			}
		}
	}

}
