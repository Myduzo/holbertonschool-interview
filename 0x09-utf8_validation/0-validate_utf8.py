#!/usr/bin/python3
"""
Method that determines if a given data represents a valid UTF-8 encoding
"""


def validUTF8(data):
    """
    Valid UTF-8 function
    """
    # arr = []
    # for idx in data:
    #     if idx <= 255:
    #         arr.append(idx)
    #     else:
    #         arr.append(0)

    # nbytes = bytes(arr)
    # try:
    #     nbytes.decode()
    # except UnicodeDecodeError:
    #     return False

    # return True

    refdat = [x & 0b11111111 for x in data]
    bytedat = bytes(refdat)
    try:
        bytedat.decode()
    except UnicodeDecodeError:
        return False

    return True
