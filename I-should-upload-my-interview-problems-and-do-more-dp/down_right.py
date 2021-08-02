
def uniquePaths(m: int, n: int) -> int:
    number_path_from = [ [0 for _ in range(n)] for _ in range(m)]
    
    for row in range(m-1,-1,-1):
        for col in range(n-1,-1,-1):
            if(row == m-1 and col == n-1):
                number_path_from[row][col] = 1
            if(row == m-1 and col != n-1):
                number_path_from[row][col] = number_path_from[row][col-1]
            if((col == n-1 and col!=m-1) or (col==0 and row==m-1)):
                number_path_from[row][col] = number_path_from[row-1][col]
                
            number_path_from[row][col] = number_path_from[row][col-1] + number_path_from[row-1][col]
    return number_path_from[m-1][n-1]

print(uniquePaths(3,2))