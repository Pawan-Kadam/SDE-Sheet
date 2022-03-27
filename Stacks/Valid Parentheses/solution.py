# LeetCode - 20. Valid Parentheses
# Link - https://leetcode.com/problems/valid-parentheses/
  
  
class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        
        for i in s:
            if (i == '(') or (i == '[') or (i == '{'):
                stack.append(i)
            elif (i == ']') or (i == ')') or (i == '}'):
                if not stack:
                    return False
                else:
                    x = stack.pop()
                    
                    if x == '(':
                        if i == ']' or i == '}':
                            return False
                    elif x == '[':
                        if i == ')' or i == '}':
                            return False
                    elif x == '{':
                        if i == ']' or i == ')':
                            return False
        if stack:
            return False
        
        return True
