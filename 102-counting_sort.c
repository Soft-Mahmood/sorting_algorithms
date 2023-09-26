#include "sort.h"

/**
 * maximum - gets the maxiumum value in the array
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: the maxiumum integer
 */
int maximum(int *array, int size)
{
	int i, j;

	j = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > j)
			j = array[i];
	}
	return (j);
}

/**
 * counting_sort - sorts an array using in ascending order
 * @array: is the array
 * @size: the size of the array
 *
 * Return: none
 */
void counting_sort(int *array, size_t size)
{
	int *count, *sorted, max, i;

	if (array == NULL || size < 2)
		return;

	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;

	max = maximum(array, size);
	count = malloc(sizeof(int) * (max + 1));

	if (count == NULL)
	{
		free(sorted);
		return;
	}

	for (i = 0; i < (max + 1); i++)
		count[i] = 0;
	for (i = 0; i < (int)size; i++)
		count[array[i]] += 1;
	for (i = 0; i < (max + 1); i++)
		count[i] += count[i - 1];
	print_array(count, max + 1);

	for (i = 0; i < (int)size; i++)
	{
		sorted[count[array[i]] - 1] = array[i];
		count[array[i]] -= 1;
	}

	for (i = 0; i < (int)size; i++)
		array[i] = sorted[i];


	free(sorted);
	free(count);
}
