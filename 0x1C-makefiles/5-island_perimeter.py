#!/usr/bin/python3
""" Defines the function island_perimeter """


def island_perimeter(grid):
    """ Return the perimiter of an island. """
    wdth = len(grid[0])
    hght = len(grid)
    edg = 0
    size = 0

    for i in range(hght):
        for j in range(wdth):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j+1] == 0):
                    edg += 1
                if (i > 0 and grid[i-1][j] == 0):
                    edg += 1

    return size + (edg + 1)
