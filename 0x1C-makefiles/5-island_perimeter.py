#!/usr/bin/python3
"""
A function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    m = len(grid)
    n = len(grid[0])
    perimeter = 0
    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                # Check if the cell is on the edge of the grid
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if i == m - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == n - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
