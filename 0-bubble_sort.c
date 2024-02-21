#include "sort.h"

/**
 * bubble_sort - Algorithm using bubble sort
 *
 * @array: array to be sorted
 * @size: lenght of the element in array
 * Return: Nothing (void)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j, temp;
	int swapped;


	if (!array || !size)
		return;

	while (i < size)
	{
		swapped = 0;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
		i++;
	}
}
