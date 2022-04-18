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
    vector<TreeNode> inorderNodes;
    void inorderTraversal(TreeNode* root){
        if(root == NULL)
            return;
        inorderTraversal(root->left);
        inorderNodes.push_back(root->val);
        inorderTraversal(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        inorderTraversal(root);
        TreeNode* curr = new TreeNode(inorderNodes[0]);
        TreeNode* first = curr;
        
        for(int i=1; i<inorderNodes.size(); i++){
            curr->right = new TreeNode(inorderNodes[i]);
            curr = curr->right;
        }
        
        return first;
    }
};
