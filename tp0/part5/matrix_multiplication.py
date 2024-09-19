import numpy as np

def MatrixProduct(A, B):
    
    A_rows = len(A)
    A_cols = len(A[0])

    B_rows = len(B)
    B_cols = len(B[0]) 

    C = [[0 for _ in range(B_cols)] for _ in range(A_rows)]

    # Check if the matrices can be added (same shape)
    if A_cols != B_rows:
        raise ValueError("Matrices must have the same dimensions for addition.")
    
    for i in range(A_rows):
        for j in range(B_cols):
            for k in range(A_cols):
                C[i][j] += A[i][k] * B[k][j]

    return C


A = [[1, 2, 3, 4]]  # 1 x 4
B = [[1], [2], [3], [4]]    # 4 x 1

matrix_a = [[1, 2], [3, 4]]
matrix_b = [[5, 6], [7, 8]]

print(MatrixProduct(matrix_a, matrix_b))