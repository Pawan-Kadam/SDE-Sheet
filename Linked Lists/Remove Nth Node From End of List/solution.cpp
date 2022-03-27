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
    int getLength(ListNode *head){
        ListNode *t = head;
        int len = 0;
        while(t){
            len++;
            t=t->next;
        }
        return len;
    }
    
    ListNode* deleteNode(ListNode *head, int pos){
        
        if (pos == 1){
            ListNode *temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
        }
        else{
            ListNode *curr = head;
            ListNode *prev = nullptr;
            
            int cnt = 1;
            while(curr && cnt < pos){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            
            if(prev->next){
            prev->next = curr->next;
            curr->next = nullptr;
            delete curr;}
        }
        return head;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k = getLength(head) == 1 ? 1 : getLength(head) - n + 1;
        ListNode *t = head;
        int cnt = 1;
        
        if(getLength(head) == 1 && head->next){
            head = nullptr;
        }
        
        return deleteNode(head, k);
    }
};
