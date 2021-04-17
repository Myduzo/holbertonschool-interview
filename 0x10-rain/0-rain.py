#!/usr/bin/python3
""" Rain
"""
from typing import List


def rain(walls: List[int]) -> int:
    """ Calculates how much water will
    be retained after it rains.
    """
    res = 0
    n = len(walls)

    for x in range(1, n - 1):
        left = walls[x]
        for y in range(x):
            left = max(left, walls[y])

        right = walls[x]
        for y in range(x + 1, n):
            right = max(right, walls[y])

        res = res + (min(left, right) - walls[x])
    return res
