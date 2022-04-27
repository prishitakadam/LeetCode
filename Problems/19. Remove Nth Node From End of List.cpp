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
        int totalNodes = 0;
        
        ListNode* curr = head;
       
        while(curr!=NULL){
            curr = curr->next;
            totalNodes++;
        }
        
        
        int k = totalNodes - n;
        
        ListNode* temp = new ListNode(0);
        temp->next = head;
        curr = temp;
        
        while(k > 0){
            curr = curr->next;
            k--;
        }
        
        curr->next = curr->next->next;
        
        return temp->next;
        
    }
};
