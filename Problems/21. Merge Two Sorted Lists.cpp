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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL, *p = NULL;
        
        if(l1 != NULL || l2 != NULL){
            if(l1 == NULL && l2 != NULL) p = l2, l2=l2->next;
            else if(l2 == NULL && l1 != NULL) p = l1, l1 =l1->next;
            else{
                if(l1->val > l2->val) p = l2, l2=l2->next;
                else p = l1, l1 =l1->next;
            }
            head = p;
        }
        else
            return NULL;
        
        while(l1 != NULL && l2 != NULL){
            if(l1->val > l2->val) p->next = l2, l2 = l2->next;
            else p->next = l1, l1 = l1->next;
            p = p->next;
        }
        
        if(l1 == NULL && l2 != NULL)
            p->next = l2, l2 = l2->next, p = p->next;
        
        if(l2 == NULL && l1 != NULL)
            p->next = l1, l1 = l1->next, p = p->next;
        
        return head;
    }
};
