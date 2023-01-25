#include "sort.h"

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: pointer to the array of integers
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	int pivot, i, j, l, r, temp;
	int top = -1;
	int *stack = (int *)malloc(sizeof(int) * size);

	stack[++top] = 0;
	stack[++top] = size - 1;
	while (top >= 0)
	{
		r = stack[top--];
		l = stack[top--];
		pivot = array[r];
		i = (l - 1);
		for (j = l; j <= r - 1; j++)
		{
			if (array[j] <= pivot)
			{
				i++;
				if (i != j)
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
					print_array(array, size);
				}
			}
		}
		if (i + 1 != r)
		{
			temp = array[i + 1];
			array[i + 1] = array[r];
			array[r] = temp;
			print_array(array, size);
		}
		if (l < i)
		{
			stack[++top] = l;
			stack[++top] = i;
		}
		if (r > i + 1)
		{
			stack[++top] = i + 1;
			stack[++top] = r;
		}
	}
	free(stack);
}
