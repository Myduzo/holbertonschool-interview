#!/usr/bin/python3
""" Island Perimeter
"""


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid
    """
    count = 0

    if len(grid) > 100:
        return None

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j-1] == 0 or grid[i][j-1] is None:
                    count += 1
                if grid[i-1][j] == 0 or grid[i][j-1] is None:
                    count += 1
                if grid[i][j+1] == 0 or grid[i][j-1] is None:
                    count += 1
                if grid[i+1][j] == 0 or grid[i][j-1] is None:
                    count += 1
    return count
