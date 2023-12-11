#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - searches for value in array using Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int *arr_y = array;

	if (arr_y == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, arr_y[i]);
		if (arr_y[i] == value)
			return (i);
	}
	return (-1);
}
