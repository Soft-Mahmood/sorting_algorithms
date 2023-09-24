#include "sort.h"
#include <stdlib.h>
/**
 * Code description: Prints the array after each swap
 * bubble_sort - it sorts an array of integers in ascending order
 * @array: An array of integers to be sorted
 * @size: Which is the size of the array
*/
void bubble_sort(int *array, size_t size)
{
size_t x, y;
for (x = 0; x < size - 1; x++)
{
for(y = 0; y < size - 1 - x; y++)
{
if (array[x] > array[y + 1])
{
exchange_int(&array[x], &array[y+1]);
}
}
}
}
/**
**
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
