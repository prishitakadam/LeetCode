/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        bool foundP = false, foundQ = false;
        Node* parentP = p->parent;
        Node* parentQ = q->parent;
        set<int> ancestorsP;
        set<int> ancestorsQ;
        
        ancestorsP.insert(p->val);
        ancestorsQ.insert(q->val);
        
        while(foundP == false || foundQ == false){
            if(foundP == false){
                if(parentP != NULL){
                    ancestorsP.insert(parentP->val);
                    if(ancestorsQ.find(parentP->val) != ancestorsQ.end())
                        return parentP;
                    parentP = parentP->parent;
                }
                else{
                    foundP = true;
                }
            }
            
            if(foundQ == false){
                if(parentQ != NULL){
                    ancestorsQ.insert(parentQ->val);
                    if(ancestorsP.find(parentQ->val) != ancestorsP.end())
                        return parentQ;
                    parentQ = parentQ->parent;
                }
                else{
                    foundQ = true;
                }
            }
        }
        
        return NULL;
    }
};
