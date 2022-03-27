# LeetCode - 876. Middle of the Linked List
# Link - https://leetcode.com/problems/middle-of-the-linked-list/



# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getLength(self, head):
        l = 1
        h = head
        
        while(h.next):
            l += 1
            h = h.next
        return l
        
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ln = self.getLength(head)
        
        mid = ceil(ln/2)
        mid = mid + 1 if ln % 2 == 0 else mid
        
        t = head
        pos = 1
        while(pos < mid):
            t = t.next
            pos += 1
        
        head = t
        
        return head
