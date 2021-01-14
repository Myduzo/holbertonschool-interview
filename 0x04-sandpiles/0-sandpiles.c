#include "sandpiles.h"
/**
 * sp_sum - function that so the sum of 2 sandpiels
 * @grid1: sandpiles 1
 * @grid2: sandpiles 2
 */
void sp_sum(int grid1[3][3], int grid2[3][3])
{
  int i = 0, j = 0;
  int gridsum[3][3];

  while (i < 3)
  {
    while (j < 3)
    {
      gridsum[i][j] = grid1[i][j] + grid2[i][j];
      j++;
    }
    i++;
  }
  sp_print_grid;
}

/**
 * 
 * 
 * 
 */
int sp_stable (int grid[3][3], int gridsum[3][3])


/**
 * my_print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
static void sp_print_grid(int grid[3][3])
{
    int i, j;

    printf("=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}
