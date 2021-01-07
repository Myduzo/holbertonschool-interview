#!/usr/bin/python3
"""
Minimum Operations function
"""


def minOperations(n):
    hlist = ['H']
    flag = 1

    if n is None or n <= 0 or isinstance(n, float):
        return 0

    if (n % 3) == 0:
        while (len(hlist) != n):
            if (len(hlist) == n / 3):
                copylist = hlist[:]
                flag += 1
            if (len(hlist) >= n / 3):
                hlist.extend(copylist)
                flag += 1
            else:
                hlist.append('H')
                flag += 1
        return flag

    if (n % 2) == 0:
        while (len(hlist) != n):
            if (len(hlist) == n / 2):
                copylist = hlist[:]
                flag += 1
            if (len(hlist) >= n / 2):
                hlist.extend(copylist)
                flag += 1
            else:
                hlist.append('H')
                flag += 1
        return flag

    else:
        while (len(hlist) != n):
            hlist.append('H')
            flag += 1
        return flag
