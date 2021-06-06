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
    ListNode* middleNode(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        int listLen = 0;
        
        while(second != NULL){
            listLen++;
            second = second->next;
        }
        
        if(listLen%2 != 0 && listLen!=1)
            listLen = (listLen-1)/2;
        else if(listLen == 1)
            listLen = 0;
        else
            listLen = listLen/2;
        
        while(listLen > 0){
            first = first->next;
            listLen--;
        }
        
        return first;
            
    }
};
