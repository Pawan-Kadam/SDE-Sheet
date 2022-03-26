# LeetCode - 119. Pascal's Triangle II
# Link - https://leetcode.com/problems/pascals-triangle-ii/

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
