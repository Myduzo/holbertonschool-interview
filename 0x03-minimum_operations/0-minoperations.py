#!/usr/bin/python3
"""
Minimum Operations function
"""


def minOperations(n):
    """return the sum of operations used to get the total equals to n"""
    op = 0
    copypaste = 0
    total = 1

    while (total < n):
        if (n % total == 0):
            op += 2
            copypaste = total

        else:
            op += 1

        total = copypaste + total

    return op
