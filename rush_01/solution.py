import numpy as np
from numpy.core.numeric import extend_all
 
def valid_constraints(col_up, col_down, row_left, row_right):
    check = True
    for i in range(len(col_up)):
        if col_up[i] == 4 and col_down[i] != 1:
            check = False
        if col_up[i] != 1 and col_down[i] == 4:
            check = False
    for j in range(len(row_left)):
        if row_left[j] == 4 and row_right[j] != 1:
            check = False
        if row_left[j] != 1 and row_right[j] == 4:
            check = False
    return check
 
def visible_move(ls, reverse=False):
    copy = np.copy(ls)
    if reverse:
        copy = copy[::-1]
 
    max = 0
    visible_count = 0
    for cell in copy:
        if cell > max:
            visible_count += 1
            max = cell
    
    return visible_count
 
def table_check(table, col_up, col_down, row_left, row_right):
    check = True
    for col in range(len(col_up)):
        col_ls = table[:, col]
        if visible_move(col_ls) != col_up[col] or visible_move(col_ls, True) != col_down[col]:
            check = False
    
    for row in range(len(row_left)):
        row_ls = table[row, :]
        if visible_move(row_ls) != row_left[row] or visible_move(row_ls, True) != row_right[row]:
            check = False
 
    return check
 
def expand(x, y, table):
    results = []
    for i in range(1,5):
        if i not in table[x, :] and i not in table[:, y]:
            results.append(i)
    return results
 
def dfs(table, col_up, col_down, row_left, row_right):
    moves = []
    moves.append(table)
 
    while moves:
        current_move = moves.pop()
 
        zero_locations = np.where(current_move == 0)
 
        if len(zero_locations[0]) == 0 and table_check(current_move, col_up, col_down, row_left, row_right):
            return current_move
        elif len(zero_locations[0]) != 0:
            x = zero_locations[0][0]
            y = zero_locations[1][0]
            for possible_move in expand(x, y, current_move):
                new_moves = np.copy(current_move)
                new_moves[x, y] = possible_move
                moves.append(new_moves)
    
    return "Errors"
 
def solve_table(col_up, col_down, row_left, row_right):
    #Let's check the constraint first
    if not valid_constraints(col_up, col_down, row_left, row_right):
        return "Error"
    
    #Create a table and solve it using Depth-First Search (Backtracking)
    table_length = len(row_left)
    table_width = len(col_up)
    table = np.zeros((table_length,table_width), dtype=int)
 
    return dfs(table, col_up, col_down, row_left, row_right)
 
col_up = [3,2,2,1]
col_down = [1,3,2,2]
row_left = [4,2,3,1]
row_right = [1,2,2,2]
 
print(solve_table(col_up, col_down, row_left, row_right))
