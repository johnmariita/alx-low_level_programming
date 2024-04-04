#!/usr/bin/python3
"""module containing the working of the island perimeter question"""


def island_perimeter(grid):
    """function that computes the perimeter of the island
    """
    perimeter = 0
    for r in range(len(grid)):
        for i in range(len(grid[r])):
            if r != 0 or r != len(grid) - 1:
                # not the first row nor the last row
                if i == 0 and grid[r][i] == 1:
                    perimeter += 1
                    if grid[r - 1][i] == 0:
                        perimeter += 1
                    if grid[r + 1][i] == 0:
                        perimeter += 1
                    if grid[r][i+1] == 0:
                        perimeter += 1
                elif i == len(grid[r]) - 1 and grid[r][i] == 1:
                    perimeter += 1
                    if grid[r - 1][i] == 0:
                        perimeter += 1
                    if grid[r + 1][i] == 0:
                        perimeter += 1
                    if grid[r][i - 1] == 0:
                        perimeter += 1
                else:
                    if grid[r][i] == 1:
                        if grid[r - 1][i] == 0:
                            perimeter += 1
                        if grid[r + 1][i] == 0:
                            perimeter += 1
                        if grid[r][i - 1] == 0:
                            perimeter += 1
                        if grid[r][i+1] == 0:
                            perimeter += 1
            else:
                if r == 0:
                    if grid[r][i] == 1:
                        perimeter += 1
                        if i == 0:
                            perimeter += 1
                            if grid[r+1][i] == 0:
                                perimeter += 1
                            if grid[r][i+1] == 0:
                                perimeter += 1
                        elif i == len(grid[r]) - 1:
                            perimeter += 1
                            if grid[r+1][i] == 0:
                                perimeter += 1
                            if grid[r][i-1] == 0:
                                perimeter += 1
                else:
                    if grid[r][i] == 1:
                        perimeter += 1
                        if i == 0:
                            perimeter += 1
                            if grid[r-1][i] == 0:
                                perimeter += 1
                            if grid[r][i+1] == 0:
                                perimeter += 1
                        elif i == len(grid[r]) - 1:
                            perimeter += 1
                            if grid[r-1][i] == 0:
                                perimeter += 1
                            if grid[r][i-1]:
                                perimeter += 1
    return perimeter
