#!/usr/bin/env python3
""" Rain
"""
from typing import List


def rain(walls: List[int]) -> int:
    """ Calculates how much water will
    be retained after it rains.
    """
    if not walls:
        return 0

    walls = list(set(walls))
    walls.remove(0)

    count = 1
    for wall in walls:
        count *= wall
    return int(count / len(walls))
