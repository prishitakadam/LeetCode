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

    int getDecimal(ListNode* head){

       vector<int> data;
        int i = 0, decimalNumber = 0;

        while (head != NULL) {
            data.push_back(head->val);
            head = head->next;
        }

        reverse(data.begin(), data.end());

        for(auto x: data){
            decimalNumber += pow(2,i) * x;
            i += 1;
        }
       return decimalNumber;

    }


    int getDecimalValue(ListNode* head) {
        long long num = 0, binaryNumber;
    
        binaryNumber  = getDecimal(head);
        
        
        return binaryNumber;

    }
};
