# LeetCode - 73. Set Matrix Zeroes
# Link - https://leetcode.com/problems/set-matrix-zeroes/

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        row = []
        col = []
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if matrix[i][j] == 0:
                    if ((j not in col) or (i not in row)):
                        row.append(i)
                        col.append(j)
        
        
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if i in row or j in col:
                    matrix[i][j] = 0
                
