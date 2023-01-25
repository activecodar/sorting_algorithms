#include "sort.h"

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: pointer to the array of integers
 * @size: size of the array
 */

void quick_sort(int *array, int low, int high)
{
    int pivot;
    int i, j;
    int temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j)
        {
            while (array[i] <= array[pivot] && i <= high)
            {
                i++;
            }
            while (array[j] > array[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                print_array(array, sizeof(array) / sizeof(array[0]));
            }
        }
        temp = array[j];
        array[j] = array[pivot];
        array[pivot] = temp;
        print_array(array, sizeof(array) / sizeof(array[0]));
        quick_sort(array, low, j - 1);
        quick_sort(array, j + 1, high);
    }
}

