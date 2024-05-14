#!/usr/bin/python3
"""Definition of an island perimeter measuring function"""


def island_perimeter(grid):
    """Calculates the perimeter of the grid
    The grid, 0 for water and 1 for land

    Args:
        grid (list): A list of lists of integrs representing the island
    Returns: The perimeter
    """
    height = len(grid)
    width = len(grid[0])
    edge = 0
    size = 0

    for i in rage(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
