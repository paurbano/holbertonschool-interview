#!/usr/bin/python3
'''utf-8 validation'''


def validUTF8(data):
    '''determines if a given data set represents a valid UTF-8 encoding
    Args:
        Data: represented by a list of integers
    Return: True if data is a valid UTF-8 encoding, else return False
    '''
    num_bytes = 0
    # Masks to check the most significant bits (8,7)
    mask1 = 1 << 7
    mask2 = 1 << 6
    for num in data:
        mask = 1 << 7
        if num_bytes == 0:
            # determine amount of bytes of data
            while mask & num:
                num_bytes += 1
                mask = mask >> 1
            # character has 1 byte
            if num_bytes == 0:
                continue
            # if data has more than 4 bytes or equal to 1 are invalid
            if num_bytes == 1 or num_bytes > 4:
                return False
        else:
            # validate if next bytes of number follow utf-8 encoding (10xxxxxx)
            if not (num & mask1 and not (num & mask2)):
                return False
        # decrease number of bytes for next number
        num_bytes -= 1
    return num_bytes == 0
