#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(ptr + j));
			free(ptr);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
