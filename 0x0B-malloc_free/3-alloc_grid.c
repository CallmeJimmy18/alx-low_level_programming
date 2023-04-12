#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **arrr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrr = malloc(sizeof(int *) * height);

	if (arrr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arrr[i] = malloc(sizeof(int) * width);

		if (arrr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arrr[i]);

			free(arrr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arrr[i][j] = 0;
	}

	return (arrr);
}
