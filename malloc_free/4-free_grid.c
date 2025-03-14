#include <stdlib.h>

/**
* free_grid - Frees a 2D grid previously created by alloc_grid.
* @grid: The 2D grid to free.
* @height: The number of rows in the grid.
*/
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

/* Free each row */
for (i = 0; i < height; i++)
{
free(grid[i]);
}

/* Free the grid itself */
free(grid);
}

