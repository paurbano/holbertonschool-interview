#!/usr/bin/env python3
'''Lockboxes '''


def canUnlockAll(boxes):
    '''
    method that determines if all the boxes can be opened
    '''

    openboxes = [0]
    for key in openboxes:
        for box in boxes[key]:
            if box not in openboxes and box < len(boxes):
                openboxes.append(box)
    if len(openboxes) == len(boxes):
        return True
    return False
'''
    myKeys = [0]
    for key in myKeys:
        for boxKey in boxes[key]:
            if boxKey not in myKeys and boxKey < len(boxes):
                myKeys.append(boxKey)
    if len(myKeys) == len(boxes):
        return True
    return False
'''
