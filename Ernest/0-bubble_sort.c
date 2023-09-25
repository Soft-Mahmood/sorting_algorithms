#include "sort.h"
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
/**Outer loop for the unsorted Array**/
for (x = 0; x < size - 1; x++)
{
/**Inner loop**/
for (y = 0; y < size - 1 - x; y++)
{
if (array[y] > array[y + 1])
{
/**Call the exchane_int function to swap**/
exchange_int(&array[y], &array[y + 1]);
/* Print the array after each swap */
print_array(array, size);
}
}
}
}
