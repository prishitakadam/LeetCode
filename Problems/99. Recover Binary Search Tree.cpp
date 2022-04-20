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
    vector<TreeNode> inNodes;
    
    void inorderTraversal(TreeNode* root){
        if(root != NULL){
            inorderTraversal(root->left);
            inNodes.push_back(root->val);
            inorderTraversal(root->right);
        }
    }
    
    void recover(TreeNode* root, int curr, int first, int second){
        if(root != NULL){
            if(root->val == first || root->val == second){
                root->val = (root->val == first)? second:first;
            }
            recover(root->left, curr+1, first, second);
            recover(root->right, curr+1, first, second);
        }
    }
    
    
    void recoverTree(TreeNode* root) {
        inorderTraversal(root);
        int first = -1, second = -1;
        
        for(int i=0; i<inNodes.size()-1; i++){
            if(inNodes[i].val > inNodes[i+1].val){
                if(first == -1)
                    first = i;
                else
                    second = i;
            }
        }
        
        for(int i=1; i<inNodes.size(); i++){
            if(inNodes[i-1].val > inNodes[i].val){
                if(first == -1)
                    first = i;
                else
                    second = i;
            }
        }
        
        recover(root, 0, inNodes[first].val, inNodes[second].val);
    }
};
