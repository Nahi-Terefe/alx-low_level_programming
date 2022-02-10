#!/usr/bin/python3
""" island perimeter module """

def island_perimeter():
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                perimeter += 4
                if y > 0:
                    if grid[y - 1][x] != 0:
                        perimeter -= 1
                if y < len(grid) - 1:
                    if grid[y + 1][x] != 0:
                        perimeter -= 1
                if x > 0:
                    if grid[y][x - 1] != 0:
                        perimeter -= 1
                if x < len(grid[0]) - 1:
                    if grid[y][x + 1] != 0:
                        perimeter -= 1
    return perimeter
