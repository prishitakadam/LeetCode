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
vector<int> LinkedListToVector(ListNode* head){
   
   vector<int> data;
    
    while (head != NULL) {
        data.push_back(head->val);
        head = head->next;
    }
    
    return data;
    
}
    
bool getAns(vector<int> data, int len){
    int* p = data.data();
    int start, end;
    bool ans = 1;
    start = 0;
    end = len - 1;
    
    while(start<end){
        if(p[start]!=p[end]){
            ans = 0;
            break;
        }
        start += 1;
        end -= 1;
    }
    
    return ans;
}
    
public:
    bool isPalindrome(ListNode* head) {
        
        vector<int> d;
        int len;
        bool ans;
        
        d = LinkedListToVector(head);
        len = d.size();
        reverse(d.begin(), d.end());

        ans = getAns(d, len);
        
        return ans;
        
    }
};
