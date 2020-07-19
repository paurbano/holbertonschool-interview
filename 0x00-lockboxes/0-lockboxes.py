#!/usr/bin/python3
'''Lockboxes '''


def canUnlockAll(boxes):
    '''
    method that determines if all the boxes can be opened
    '''

    openboxes = [0]
    # go through keys in open boxes start with box 0
    for key in openboxes:
        # go to box according key number
        for box in boxes[key]:
            if box not in openboxes and box < len(boxes):
                openboxes.append(box)
    # if the lengh of boxes and openboxes are equal
    # all boxes can be opened
    if len(openboxes) == len(boxes):
        return True
    return False
