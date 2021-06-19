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
    bool isLeaf(TreeNode* node){
        if(node == NULL)
            return false;
        if(node->left == NULL && node->right == NULL)
            return true;
        return false;
    }
    
    int sumLeft(TreeNode* node){
        int sum = 0;
        if(node!=NULL){
            if(isLeaf(node->left))
                sum += node->left->val;
            else
                sum += sumLeft(node->left);
            
            sum += sumLeft(node->right);
        }
        return sum;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        return sumLeft(root);
    }
};
