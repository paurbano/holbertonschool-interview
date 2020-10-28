#!/usr/bin/env python3
'''N queens '''

import sys


def solve(n):
    '''Prepare board and return a posible solution
    args:
        n: number of queens
    Return
        board with posible solution
    '''
    # prepare a board
    board = [[0 for x in range(n)] for x in range(n)]
    # set initial positions
    return place_queen(board, 0, 0)


def place_queen(board, row, column):
    """place a queen that satisfies all the conditions
    Args:
        board:
        row:
        column:
    """
    # base case
    if row > len(board)-1:
        yield board
    # check every column of the current row if its safe to place a queen
    while column < len(board):
        if is_safe(board, row, column):
            # place a queen
            board[row][column] = 1
            # place the next queen with an updated board
            for solution in place_queen(board, row+1, 0):
                yield solution
            return
        else:
            column += 1
    # there is no column that satisfies the conditions. Backtrack
    for c in range(len(board)):
        if board[row-1][c] == 1:
            # remove this queen
            board[row-1][c] = 0
            # go back to the previous row and start from the
            # last unchecked column
            for solution in place_queen(board, row-1, c+1):
                yield solution


def is_safe(board, row, column):
    """ if no other queens threaten a queen at (row, queen) return True """
    queens = []
    for r in range(len(board)):
        for c in range(len(board)):
            if board[r][c] == 1:
                queen = (r, c)
                queens.append(queen)
    for queen in queens:
        qr, qc = queen
        # check if the pos is in the same column or row
        if row == qr or column == qc:
            return False
        # check diagonals
        if (row + column) == (qr+qc) or (column-row) == (qc-qr):
            return False
    return True


def printSolution(board):
    ''' Print Solutions
    Args:
        board: board with placed queens
    '''
    pos_solu = []
    for i in range(len(board)):
        sol = []
        for j in range(len(board)):
            if board[i][j] == 1:
                sol.append(i)
                sol.append(j)
        pos_solu.append(sol)
    print(pos_solu)


if __name__ == "__main__":
    '''main'''
    if (len(sys.argv) == 2):
        # Validate data
        try:
            N = int(sys.argv[1])
        except Exception:
            print("N must be a number")
            exit(1)
        if N < 4:
            print("N must be at least 4")
            exit(1)
    else:
        print("Usage: nqueens N")
        exit(1)

    for solution in solve(N):
        printSolution(solution)
