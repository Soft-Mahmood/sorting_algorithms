#include "sort.h"
/**
 * exchange_int - Swaps two integers in an array
 * @x: A pointer to the first intger to swap
 * @y: A pointer to the second integer to swap
 * Code description: Sorts an array of integers in ascending order
 */
void exchange_int(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * selection_sort: Sorts an array of integers in asscending order.
 * @array: An array of integers.
 * @size: size of the integer.
 **/
void selection_sort(int *array, size_t size)
{
	size_t y, z;
	size_t low_idx;
/**traversing through the outer loop**/
	for (y = 0; y < size - 1; y++)
	{
/**update low_idx with every value of y**/
		low_idx = y;
		for (z = y + 1; z < size; z++)
			if (array[z] < array[low_idx])
				low_idx = z;
		if (low_idx != y)
		{
			exchange_int(&array[low_idx], &array[y]);
			print_array(array, size);
		}
	}
}
			

