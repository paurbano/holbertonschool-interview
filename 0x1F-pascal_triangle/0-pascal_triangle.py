#!/usr/bin/python3
'''pascal triangle'''
from math import factorial


def pascal_triangle(n):
    '''returns a list of lists of integers representing the Pascal’s
        triangle of n
    '''
    pascal = []
    for i in range(n):
        level = []
        for j in range(i + 1):
            level.append(factorial(i) // (factorial(j) * factorial(i - j)))
        pascal.append(level)
    return pascal
