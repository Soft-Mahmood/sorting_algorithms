#include "sort.h"
#include <stdlib.h>
/**
 * exchange_int - Which is used to exhange the integers
 * @xy: A pointer to the first integer to swap
 * @yp: A pointer to the second integer to swap
 **/
/**Entry of the helper function**/
void exchange_int(int *xy, int *yp)
{
/**Creates a temp variable**/
int temp = *xy;
/**Updates the value pointed to by xy**/
*xy = *yp;
/**Updates the value pointed to by yp**/
*yp = temp;
}
/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: An array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: This function sorts the input array in-place.
 * It compares adjacent elements and swaps them
 */
void bubble_sort(int *array, size_t size)
{
size_t x, y;
int temp;
for (x = 0; x < size - 1; x++)
{
for (y = 0; y < size - 1 - x; y++)
{
if (array[y] > array[y + 1])
{
temp = array[y];
array[y] = array[y + 1];
array[y + 1] = temp;
}
}
}
}
