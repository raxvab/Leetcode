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
    TreeNode* pruneTree(TreeNode* root) {
       if (!root)
        return nullptr;
 
    // Traverse from leaf to node
    root->left = pruneTree(root->left);
    root->right = pruneTree(root->right);
 
    // We only trim if the node's value is 0
    // and children are null
    if (root->val == 0 && root->left == nullptr
        && root->right == nullptr) {
 
        // We trim the subtree by returning nullptr
        return nullptr;
    }
 
    // Otherwise we leave the node the way it is
    return root;  
    }
};