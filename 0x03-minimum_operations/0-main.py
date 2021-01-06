#!/usr/bin/python3
"""
Main file for testing
"""

minOperations = __import__('0-minoperations').minOperations

n = 4
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 12
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 0
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 18
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = -5
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 11
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))