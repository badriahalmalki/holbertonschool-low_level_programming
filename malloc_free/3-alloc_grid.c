#include "main.h"
/**
 * alloc_grid - returns a pointer,
 * to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2D array,
* or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int array1, array2;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    for (array1 = 0; array1 < height; array1++)
    {
        grid[array1] = malloc(sizeof(int) * width);
        if (grid[array1] == NULL)
        {
            for (array2 = 0; array2 < array1; array2++)
                free(grid[array2]);
            free(grid);
            return (NULL);
        }
        for (array2 = 0; array2 < width; array2++)
            grid[array1][array2] = 0;
    }

    return (grid);
}