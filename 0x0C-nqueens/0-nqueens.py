#!/usr/bin/python3
'''N queens '''

import sys


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


def isSafe(board, row, col):
    '''check if a queen can be placed on board[row][col]'''

    # Check this row on left side
    for i in range(col):
        if (board[row][i]):
            return False

    # Check upper diagonal on left side
    i = row
    j = col
    while i >= 0 and j >= 0:
        if(board[i][j]):
            return False
        i -= 1
        j -= 1

    # Check lower diagonal on left side
    i = row
    j = col
    while j >= 0 and i < len(board):
        if(board[i][j]):
            return False
        i = i + 1
        j = j - 1

    return True


def solveNQUtil(board, col):
    ''' A recursive utility function to solve N Queen problem'''

    # base case: If all queens are placed then return true
    if (col == len(board)):
        printSolution(board)
        return True

    ''' Consider this column and try placing
    this queen in all rows one by one '''
    res = False
    for i in range(len(board)):
        ''' Check if queen can be placed on
        board[i][col] '''
        if (isSafe(board, i, col)):

            # Place this queen in board[i][col]
            board[i][col] = 1

            # Make result true if any placement
            # is possible
            res = solveNQUtil(board, col + 1) or res

            ''' If placing queen in board[i][col]
            doesn't lead to a solution, then
            remove queen from board[i][col] '''
            board[i][col] = 0  # BACKTRACK

    return res


def solveNQ(N):
    '''Solves the N Queen problem using Backtracking.'''

    board = [[0 for j in range(N)] for i in range(N)]

    if (solveNQUtil(board, 0) is False):
        exit(1)
    return


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
    solveNQ(N)
