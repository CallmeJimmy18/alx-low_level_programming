#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * min - returns the minimum of two values
 * @a: is the first value
 * @b: is the second value
 * Return: a if lower or equal to b, b otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}
/**
 * jump_search - searches for value ina a array using Jump search
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index containing `value`, or -1 if `value` not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lft, rht, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (rht = 0; rht < size && array[rht] < value;
	     lft = rht, rht += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       rht, array[rht]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", lft, rht);
	for (; lft <= min(rht, size - 1); lft++)
	{
		printf("Value checked array[%lu] = [%d]\n", lft, array[lft]);
		if (array[lft] == value)
			return (lft);
	}
	return (-1);
}
