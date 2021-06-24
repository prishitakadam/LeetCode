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
    void getElements(TreeNode* root, vector<int>& elements){
        if(root == NULL)
            return;
        else{
            getElements(root->left, elements);
            elements.push_back(root->val);
            getElements(root->right, elements);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> elements;
        getElements(root, elements);
        return elements[k-1];
    }
};
