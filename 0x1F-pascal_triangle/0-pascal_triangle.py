#!/usr/bin/python3
"""
Pascal's Triangle
"""


def pascal_triangle(n):
    """
    Function that returns a list of lists of integers
    representing Pascal's triangle of n.
    """
    triangle = []

    if n <= 0:
        return triangle

    for x in range(n):
        inner = [1]
        for y in range(x):
            inner.append(sum(triangle[-1][y:y+2]))
        triangle.append(inner)

    return triangle
