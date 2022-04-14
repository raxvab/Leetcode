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
    // int d=INT_MAX;
    int minDepth(TreeNode* root) {
         if(!root)
            return 0;
     // if(!res)
     //     return 0;
        int left=minDepth(root->left);
      int right=minDepth(root->right);
      // if(abs(left-right)>1)
      //     res=false;
       
        
        // left==0 means there's no left subtree so we can't compare its heightto the right subtree ... similarly for right==0
        if(left==0)
            return 1+right;
        else if(right==0)
            return 1+left;
        else
      return 1+min(left,right);
    }
};