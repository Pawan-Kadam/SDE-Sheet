# LeetCode - 234. Palindrome Linked List
# Link - https://leetcode.com/problems/palindrome-linked-list/


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        
        # Moving pointer till middle of LL
        slow = head
        fast = head
        temp = head
        
        while(fast.next and fast.next.next):
            slow = slow.next
            fast = fast.next.next
        
        if fast.next:
            slow = slow.next
        
        # Reversing LL from middle
        prev = ListNode()
        curr = slow
        nxt = ListNode()
        
        while(curr):
            nxt = curr.next
            curr.next = prev
            prev = curr
            curr = nxt
        
        slow = prev
        
        
        # Here comparing each value from start of LL and reversed LL from middle
        while(slow.next != None):
            if temp.val != slow.val:
                return False
            
            temp = temp.next
            slow = slow.next
        
        return True
        
