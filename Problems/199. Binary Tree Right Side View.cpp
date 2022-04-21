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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
            return {};
        
        int maxDepth = 0, currDepth = 1;
        stack<pair<TreeNode*, int>> visited;
        vector<int> rightNodes;
        visited.push(make_pair(root, currDepth));
        TreeNode* curr;
        
        while(!visited.empty()){
            curr = visited.top().first;
            currDepth = visited.top().second;
            visited.pop();
            if(currDepth > maxDepth){
                rightNodes.push_back(curr->val);
                maxDepth++;
            }
            if(curr->left != NULL){
                visited.push(make_pair(curr->left, currDepth + 1));
            }
            if(curr->right != NULL){
                visited.push(make_pair(curr->right, currDepth + 1));
            }
        }
        
        return rightNodes;
    }
};
