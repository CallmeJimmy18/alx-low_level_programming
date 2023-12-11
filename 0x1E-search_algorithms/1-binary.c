#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches for value in a sorted array using Binary search
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lowest_ind = 0;
	size_t highest_ind = size - 1;
	size_t middle, i;
	int mid_val;
	int *arr = array;

	if (array == NULL)
		return (-1);

	while (lowest_ind <= highest_ind)
	{
		middle = lowest_ind + (highest_ind - lowest_ind) / 2;
		mid_val = arr[middle];

		printf("Searching in array: ");
		for (i = lowest_ind; i <= highest_ind; ++i)
		{
			printf("%d", arr[i]);
			if (i < highest_ind)
				printf(", ");
		}
		printf("\n");

		if (mid_val < value)
		{
			lowest_ind = middle + 1;
		}
		else if (mid_val > value)
		{
			highest_ind = middle - 1;
		}
		else
			return (middle);
	}
	return (-1);
}
