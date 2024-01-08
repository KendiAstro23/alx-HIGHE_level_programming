#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if not matrix:
        print()
    else:
        for row in range(len(matrix)):
            for elem in range(len(matrix[row])):
                if elem != len(matrix[row]) - 1:
                    endspace = ' '
                else:
                    endspace = ''
                print("{:d}".format(matrix[row][elem]), end=endspace)
            print()

