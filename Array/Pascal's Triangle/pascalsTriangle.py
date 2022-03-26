# LeetCode - 118. Pascal's Triangle
# Link - https://leetcode.com/problems/pascals-triangle/

class Solution:     
    def generate(self, numRows: int) -> List[List[int]]:
        ls = []
        
        for row in range(1, numRows+1, 1):
            c = 1
            l = []
            
            col = 1
            while col <= row:
                l.append(c)
                c = int(c * (row - col) / col)
                col += 1

            ls.append(l)
            
        return ls
