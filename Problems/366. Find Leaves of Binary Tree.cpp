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
    int dfs(TreeNode* root, vector<vector<int>>& allLeaves){
        if(root->left == NULL && root->right == NULL)
            return -1;
        
        vector<int> leafNodes;
        stack<pair<TreeNode*, pair<TreeNode*, bool>>> visited;
        visited.push(make_pair(root, make_pair(nullptr, true)));
        TreeNode* curr;
        TreeNode* prev;
        bool isLeft = true;
        
        while(!visited.empty()){
            curr = visited.top().first;
            prev = visited.top().second.first;
            isLeft = visited.top().second.second;
            visited.pop();
            
            if(curr->left == NULL && curr->right == NULL){
                leafNodes.push_back(curr->val);
                if(isLeft)
                    prev->left = NULL;
                else
                    prev->right = NULL;
                
            }
            else if(curr->left != NULL && curr->right != NULL){
                visited.push(make_pair(curr->right, make_pair(curr, false)));
                visited.push(make_pair(curr->left, make_pair(curr, true)));
            }
            else if(curr->left == NULL){
                visited.push(make_pair(curr->right, make_pair(curr, false)));
            }
            else{
                visited.push(make_pair(curr->left, make_pair(curr, true)));
            }
        }
        
        
        allLeaves.push_back(leafNodes);
        return 0;
    }
    
    vector<vector<int>> findLeaves(TreeNode* root) {
        vector<vector<int>> allLeaves;
       
        while(dfs(root, allLeaves) != -1){
            continue;
        }
        
        allLeaves.push_back({root->val});
        
        return allLeaves;
    }
};
