#!/usr/bin/python3
""" module containing island_perimeter challenge """


def island_perimeter(grid):
    """ return perimeter of one's in matrix """
    rows = len(grid)
    cols = len(grid[0])
    pmtr = 0
    adj_wtr = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                adj_wtr = 4

            if row > 0 and grid[row - 1][col] == 1:
                adj_wtr -= 1

            if row < rows - 1 and grid[row + 1][col] == 1:
                adj_wtr -= 1

            if col > 0 and grid[row][col - 1] == 1:
                adj_wtr -= 1

            if col < cols - 1 and grid[row][col + 1] == 1:
                adj_wtr -= 1

            pmtr += adj_wtr

    return pmtr
