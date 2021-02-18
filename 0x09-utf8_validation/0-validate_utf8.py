#!/usr/bin/python3
"""
Method that determines if a given data represents a valid UTF-8 encoding
"""


def validUTF8(data):
    """
    Valid UTF-8 function
    """
    arr = []
    for idx in data:
        if idx <= 255:
            arr.append(idx)

    nbytes = bytes(arr)
    try:
        nbytes.decode()
    except UnicodeError:
        return False

    return True
