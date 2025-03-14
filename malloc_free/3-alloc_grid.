#include <stdlib.h>

/**
* alloc_grid - Allocates memory for a 2D array of integers and initializes it to 0.
* @width: Number of columns.
* @height: Number of rows.
*
* Return: Pointer to the 2D array, or NULL on failure.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/* Return NULL if width or height is 0 or negative */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for row pointers */
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

/* Allocate memory for each row and initialize elements to 0 */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL) /* Free allocated memory if malloc fails */
{
    while (i > 0)
    {
	free(grid[i - 1]);
	i--;
    }
    free(grid);
    return (NULL);
}
for (j = 0; j < width; j++)
    grid[i][j] = 0; /* Initialize elements to 0 */
}

return (grid);
}

