#!/usr/bin/python3
'''calculate how much water will be retained after it rains'''


def rain(walls):
    '''Args:
            walls is a list of non-negative integers.
       Return: Integer indicating total amount of rainwater retained.
    '''
    if len(walls) == 0:
        return 0
    # total amount of rainwater retained
    res = 0

    # For every element of the array
    for i in range(1, len(walls) - 1):
        # Find the maximum element on its left
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])

        # Find the maximum element on its right
        right = walls[i]

        for j in range(i + 1, len(walls)):
            right = max(right, walls[j])

        # Update the maximum water
        res = res + (min(left, right) - walls[i])

    return res
