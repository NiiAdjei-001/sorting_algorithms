#include"sort.h"
/**
 * swap - swaps the elements
 * @n1: first element
 * @n2: second element
 */
void swap(int *n1, int *n2)
{
	int temp = *n1;

	*n1 = *n2;
	*n2 = temp;
}

/**
 * part - finds the index at partitioning
 * @array: array of elements
 * @lower: lower index
 * @upper: upper index
 * @size: array size
 *
 * Return: returns the index at partitioning
 */
int part(int *array, int lower, int upper, int size)
{
	int piv = array[upper];
	int i = lower - 1;
	int j;

	for (j = lower; j < upper; j++)
	{
		if (array[j] <= piv)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[upper]);
	print_array(array, size);
	return (i + 1);
}
/**
 * sort - quick sort an array in asc order
 * @array: array of elements
 * @lower: lower index
 * @higher: higher index
 */
void sort(int *array, int lower, int higher, int size)
{
	int p;

	p = part(array, lower, higher, size);
	sort(array, lower, p - 1, size);
	sort(array, p + 1, higher, size);
}

/**
 * quick_sort - quick sort an array in asc order
 * @array: integer array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
