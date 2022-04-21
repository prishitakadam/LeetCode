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
    int sum = 0;
    void inorderTraversal(TreeNode* root, int low, int high){
        if(root != NULL){
            inorderTraversal(root->left, low, high);
            if(root->val >= low && root->val <= high)
                sum += root->val;
            inorderTraversal(root->right, low, high);
            
        }
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        inorderTraversal(root, low, high);
        return sum;
    }
};
