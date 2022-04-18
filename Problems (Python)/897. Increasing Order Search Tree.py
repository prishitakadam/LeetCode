# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:    
    def increasingBST(self, root: TreeNode) -> TreeNode:
        inNodes = []
        def inorderTraversal(root: TreeNode):
            if root:
                inorderTraversal(root.left)
                inNodes.append(root.val)
                inorderTraversal(root.right)
            
        inorderTraversal(root)
        curr = first = TreeNode(inNodes[0])
        for i in range(1, len(inNodes)):
            curr.right = TreeNode(inNodes[i])
            curr = curr.right
        
        return first
