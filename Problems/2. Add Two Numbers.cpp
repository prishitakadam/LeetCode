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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = l1, *prev = NULL;
        int carry = 0;
        bool set = false;
        
        while(l1 != NULL && l2 != NULL){
            if((l1->val + l2->val + carry) >= 10)
                l1->val += l2->val + carry - 10, carry = 1;
            else
                l1->val += l2->val + carry, carry = 0;
            prev = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1 != NULL){
            if((l1->val + carry) >= 10)
                l1->val += carry - 10, carry = 1;
            else
                l1->val += carry, carry = 0;
            prev = l1;
            l1 = l1->next;
            
        }
        
        while(l2 != NULL){
            if(set == false)
                prev->next = l2, set = true;
            if((l2->val + carry) >= 10)
                l2->val += carry - 10, carry = 1;
            else
                l2->val += carry, carry = 0;
            prev = l2;
            l2 = l2->next;
        }
        
        if(carry == 1){
            ListNode* lastNode = new ListNode();
            lastNode->val = 1;
            prev->next = lastNode;
        }
        
        return head;
    }
};
