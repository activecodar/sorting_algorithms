#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the bubble sort algorithm
 *
 * @array: pointer to the array of integers
 * @size: size of the array
 *
 * Iterates through the array, comparing each element with the
 * next one and swapping them if the next one is smaller.
 * This process is repeated until the array is sorted in ascending order.
 *
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i;
	size_t j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
