#!/usr/bin/python3


def conections(grid, row, column, row_size, column_size):
    number_of_connections = 0
    if row > 0:
        if grid[row - 1][column] == 1:
            number_of_connections += 1
    if column > 0:
        if grid[row][column - 1] == 1:
            number_of_connections += 1
    if column < column_size - 1:
        if grid[row][column + 1] == 1:
            number_of_connections += 1
    if row < row_size - 1:
        if grid[row + 1][column] == 1:
            number_of_connections += 1

    return number_of_connections


def island_perimeter(grid):
    perimeter = 0
    max_posible_perimeter = 4
    row_size = (len(grid))
    column_size = len(grid[0])

    for row in range(row_size):
        for column in range(column_size):
            if (grid[row][column] == 1):
                perimeter += (max_posible_perimeter - conections
                              (grid, row, column, row_size, column_size))

    return perimeter
