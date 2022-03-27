//  LeetCode - 876. Middle of the Linked List
//  Link - https://leetcode.com/problems/middle-of-the-linked-list/


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
    int getLength(ListNode *head){
        int l = 1;
        ListNode *h = head;
        
        while(h->next){
            l += 1;
            h = h->next;
        }
        return l;
    }
                
    ListNode* middleNode(ListNode* head) {
        int ln = getLength(head);
        
        int mid = ln/2 + 1;
            
        int pos = 1;
        while(pos < mid){
            head = head->next;
            pos += 1;
        }
        return head;
    }
};      
