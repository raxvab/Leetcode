// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int mx=INT_MIN;

//   void help(TreeNode* root, int &ans)
//   {
//     if( root==NULL)
//         return ;
//       if(root->val>=mx)ans++;
//     mx=max(root->val,mx);
    
//     help(root->left,ans);
//     help(root->right,ans);
//   }
//     int goodNodes(TreeNode* root) {
//       int ans=0;
// help(root,ans);
//   return ans;    
//     }
// };
class Solution {
public:
    
    int ans = 0;
    void res(TreeNode* root, int mx){
        if(root == NULL) return;
        if(root->val >= mx) ans++;
        
        mx = max(root->val, mx);
        res(root->left, mx);
        res(root->right, mx);
    }
    
    int goodNodes(TreeNode* root) {
        res(root, -1000000);
        return ans;
    }
};