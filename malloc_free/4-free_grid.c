#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid previously created
* @grid: 2 dimensional grid
* @height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int array1;

	for (array1 = 0; array1 < height; array1++)
		free(grid[array1]);
	free(grid);
}
