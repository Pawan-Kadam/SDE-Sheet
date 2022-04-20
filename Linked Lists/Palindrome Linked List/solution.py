# LeetCode - 234. Palindrome Linked List
# Link - https://leetcode.com/problems/palindrome-linked-list/


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def LLtoArray(self, head):
        temp = head
        arr = []
        
        while(temp):
            arr.append(temp.val)
            temp = temp.next
            
        return arr
        
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        arr = self.LLtoArray(head)
        
        s = 0
        e = len(arr) - 1
        
        while(s <= e):
            if arr[s] != arr[e]:
                return False
            s += 1
            e -= 1
        
        return True
        
