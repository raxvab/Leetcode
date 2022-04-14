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
    bool res=false;
 int validate(TreeNode* root)
    {
        if(!root)
            return 0;
     if(!res)
         return 0;
        int left=validate(root->left);
      int right=validate(root->right);
      if(abs(left-right)>1)
          res=false;
      return 1+max(left,right);
            
    }
    bool isBalanced(TreeNode* root) {
       // bool res= false;
      //  isBalanced(root);
        res=true;
  
int c=validate(root);
        return res;
        
        
    }
};