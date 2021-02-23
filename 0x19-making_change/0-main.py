#!/usr/bin/python3
"""
Main file for testing
"""

makeChange = __import__('0-making_change').makeChange

print(makeChange([1, 2, 25], 37))

print(makeChange([1256, 54, 48, 16, 102], 1453))

print(makeChange([9, 2, 25, 1], 0))

print(makeChange([1256, 54, 48, 16, 102, 50, 25, 250, 11], 1453))