#!/usr/bin/python3
""" Change comes from within
"""


def makeChange(coins, total):
    """ Return: fewest number of coins needed to meet total
    """
    if total <= 0:
        return 0

    coins.sort(reverse=True)

    result = 0
    count = 0
    x = 0
    while (x < len(coins) and result != total):
        if result + coins[x] > total:
            x += 1
        else:
            result += coins[x]
            count += 1

    if result == total:
        return count
    return -1
