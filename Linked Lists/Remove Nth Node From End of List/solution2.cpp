// LeetCode - 19. Remove Nth Node From End of List
// Link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start = new ListNode();
        start->next = head;
        ListNode *fast = start;
        ListNode *slow = start;
        int cnt = 1;
        
        while(cnt <= n){
            fast = fast->next;
            cnt++;
        }
        
        while(fast && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
   
};
