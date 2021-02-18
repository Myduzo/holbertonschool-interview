#!/usr/bin/python3
"""
Method that determines if a given data represents a valid UTF-8 encoding
"""

def validUTF8(data):
    """
    Valid UTF-8 function
    """

    for idx in data:
        if idx > 127:
            return False
        
    return True