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
void helper(TreeNode* root,vector<int>&v)
{
    if(!root)return;
        if(root->left) helper(root->left,v);
    if(root) v.push_back(root->val);
    if(root->right)helper(root->right,v);

}
    TreeNode* increasingBST(TreeNode* root) {
     if(!root)
         return root;
        
       vector<int> v;
        helper(root,v);
        TreeNode *head =new TreeNode(v[0]);
            TreeNode *dummy=head;
for(int i=1;i<v.size();i++)
{
    dummy->right=new TreeNode(v[i]);
    dummy=dummy->right;
    
}
        return head;
    }
};