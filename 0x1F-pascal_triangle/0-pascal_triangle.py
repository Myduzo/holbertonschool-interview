#!/usr/bin/python3
"""
"""

def pascal_triangle(n):
  """
  """
  triangle = []

  if n <= 0: 
    return triangle

  for x in range(n):
    inner = [1]
    for y in range(x):
      inner.append(sum(triangle[-1][y:y+2]))
    triangle.append(inner)

  return triangle
