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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head, *next = NULL, *prev = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head, *fast = head, *start = head, *rstart = NULL, *prev = NULL;
        
        while(fast->next != NULL && fast->next->next != NULL)
            slow = slow->next, fast = fast->next->next;

        prev = slow;
        slow = slow->next;
        prev->next = NULL;
        rstart = reverseList(slow);
        
        while(rstart != NULL && start != NULL){
           if(rstart->val != start->val)
               return false;
            rstart = rstart->next;
            start = start->next;
        }
        return true;
    }
};
