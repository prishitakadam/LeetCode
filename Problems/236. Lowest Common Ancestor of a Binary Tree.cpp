/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        map<TreeNode*, TreeNode*> parents;
        stack<TreeNode*> visited;
        visited.push(root);
        parents.insert({root, NULL});
        TreeNode* currNode;
        
        while(!visited.empty()){
            currNode = visited.top();
            visited.pop();
            if(currNode->right != NULL){
                visited.push(currNode->right);
                parents.insert({currNode->right, currNode});
            }
            if(currNode->left != NULL){
                visited.push(currNode->left);
                parents.insert({currNode->left, currNode});
            }
        }   
        
        set<TreeNode*> ancestorsP;
        TreeNode* parent = parents[p];
        ancestorsP.insert(p);
        
        while(parent != root && parent != NULL){
            ancestorsP.insert(parent);
            parent = parents[parent];
        }  
        
        ancestorsP.insert(root);
        
        if(ancestorsP.find(q) != ancestorsP.end())
            return q;
        
        TreeNode* curr = q;
        
        while(ancestorsP.find(curr) == ancestorsP.end()){
            curr = parents[curr];
        }
        
        return curr;
    }
};
