#include "main.h"
/**
  * free_grid -This function free the memory
  * @grid: param
  * @height: param2
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
