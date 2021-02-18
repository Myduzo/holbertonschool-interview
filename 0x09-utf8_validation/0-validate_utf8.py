#!/usr/bin/python3
"""
Method that determines if a given data represents a valid UTF-8 encoding
"""


def validUTF8(data):
    """
    Valid UTF-8 function
    """
    arr = [idx & 0b11111111 for idx in data]
    nbytes = bytes(arr)
    try:
        nbytes.decode()
    except UnicodeDecodeError:
        return False

    return True
