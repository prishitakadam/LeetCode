/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalOrder(TreeNode* root) {
        if(root == NULL)
            return {};
        
        map<TreeNode*, int> verticalNumbers;
        map<int, vector<int>> verticalOrders;
        vector<vector<int>> vOrders;
        stack<TreeNode*> visited;
        TreeNode* curr;
        int maxLeft = 0, maxRight = 0;
        
        visited.push(root);
        verticalNumbers.insert({root, 0});
        
        while(!visited.empty()){
            curr = visited.top();
            visited.pop();
            if(curr->left!=NULL){
                visited.push(curr->left);
                verticalNumbers.insert({curr->left, verticalNumbers[curr] - 1});
                maxLeft = min(maxLeft, verticalNumbers[curr] - 1);
            }
            if(curr->right!=NULL){
                visited.push(curr->right);
                verticalNumbers.insert({curr->right, verticalNumbers[curr] + 1});
                maxRight = max(maxRight, verticalNumbers[curr] + 1);
            }
        }
        
        for(auto it=verticalNumbers.begin(); it!=verticalNumbers.end(); it++){
            if(verticalOrders.find(it->second) != verticalOrders.end())
                verticalOrders[it->second].push_back(it->first->val);
            else
                verticalOrders.insert({it->second, {it->first->val}});
        }
        
        for(int i=maxLeft; i <=maxRight; i++){
            if(verticalOrders.find(i) != verticalOrders.end())
                vOrders.push_back(verticalOrders[i]);
        }     
        
        return vOrders;
        
    }
};
