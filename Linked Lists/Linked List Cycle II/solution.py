# LeetCode - 142. Linked List Cycle II
# Link - https://leetcode.com/problems/linked-list-cycle-ii/


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        curr = head
        s = set()
        
        while(curr):
            if curr in s:
                return curr
            
            s.add(curr)
            prev = curr
            curr = curr.next
