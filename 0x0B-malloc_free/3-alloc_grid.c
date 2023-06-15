#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the allocated 2D grid, or NULL on failure.
 *
 * Description: This function dynamically allocates a 2D grid of integers
 * with the specified width and height. Each element of the grid is initialized
 * to 0. The function returns a pointer to the allocated grid, or NULL if the
 * allocation fails. The caller is responsible for freeing the memory allocated
 * by this function.
 */


int **alloc_grid(int width, int height)
{
	int x, ci;
	int **buff;

	if (width <= 0 || height <= 0)
		return (NULL);

	buff = malloc(sizeof(int *) * height);
		if (buff == NULL)

			for (x = 0; x < height; x++)
			{
				buff[x] = malloc(sizeof(int) * width);
				if (buff[x] == NULL)
				{
					for (; x >= 0; x--)

						free(buff[x]);

					free(buff);
					return (NULL);
				}

			}


	for (x = 0; x < height; x++)
	{
	for (ci = 0; ci < width; ci++)

		buff[x][ci] = 0;
	}
	return (buff);

}
