#include "sandpiles.h"
/**
 * sandpiles_sum - function that so the sum of 2 sandpiels
 * 
 * @grid1: sandpile 1
 * @grid2: sandpile 2
 * 
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
    int i = 0, j = 0;
    int test[3][3];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            grid1[i][j] += grid2[i][j];

    while (sp_check(grid1) != 0)
    {
        sp_print_grid(grid1);
        sp_stable(grid1, test);
    }
}


/**
 * sp_check - function that checks if the sandpile is stable or not
 * 
 * @grid1: sandpile 1
 * 
 * Return: 0 if the sandpile is stable
 */
int sp_check(int grid1[3][3])
{
    int i = 0, j = 0;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (grid1[i][j] > 3)
                return (1);
    return (0);
}


/**
 * sp_stable - function to stable cells contains more than 3 grains
 * 
 * @grid1: sandpile 1
 * @test: sandpile to compaire the first sandpile
 * 
 */
void sp_stable (int grid1[3][3], int test[3][3])
{
    int i = 0, j = 0;


    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            test[i][j] = grid1[i][j];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (test[i][j] > 3)
            {
                grid1[i][j] = grid1[i][j] - 4;
                if (i >= 1)
					grid1[i - 1][j] += 1;
				if (i <= 1)
					grid1[i + 1][j] += 1;
				if (j >= 1)
					grid1[i][j - 1] += 1;
				if (j <= 1)
					grid1[i][j + 1] += 1;
			}
        }
    }

}


/**
 * my_print_grid - Print 3x3 grid
 * 
 * @grid: 3x3 grid
 *
 */
void sp_print_grid(int grid[3][3])
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
