# LeetCode - 141. Linked List Cycle
# Link - https://leetcode.com/problems/linked-list-cycle/



# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        
        if head == None or head.next == None:
            return False
        
        slow = head
        fast = head
        
        while(fast.next and fast.next.next):
            slow = slow.next
            fast = fast.next.next
            
            if fast == slow:
                return True
            
        return False
        
