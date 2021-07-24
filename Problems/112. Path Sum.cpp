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
    bool helper(TreeNode* node, int targetSum){
        if(node == NULL)
            return false;
        if(node->left == NULL && node->right == NULL && targetSum-node->val == 0)
             return true;
            
        return helper(node->left, targetSum-node->val) || helper(node->right, targetSum-node->val);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
       return helper(root, targetSum);
    }
};
