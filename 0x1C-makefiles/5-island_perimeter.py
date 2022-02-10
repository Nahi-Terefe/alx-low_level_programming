#!/usr/bin/python3
""" island perimeter module """

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid """
    
    perimeter = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                perimeter += 4
                if column > 0 and grid[row][column - 1] == 1:
                    perimeter -= 2
                if row > 0 and grid[row - 1][column] == 1:
                    perimeter -= 2

    return perimeter
