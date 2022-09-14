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
  
//   bool check(vector<int> temp)
//   {
//     unordered_map<int,int>mp;
    
//     for( auto i:temp)
//     {
//       mp[i]++;
//     }
//     int count=0;
//     for( auto i:mp)
//     {
//       if( i.second%2==1)
//     count++;    
//     if( count>1)
      
//       mp[i]--;return false;
//     }    
//     mp[i]--;
//     return true;
//   }
  unordered_map<int,int> mp;
  void helper( TreeNode* root, int & ans){
    if( root==NULL)
return;
    
        mp[root->val]++;

    //////////////////////////////////////////////
    if( root->left==NULL and root->right==NULL)
    {
             int temp=0;
              for(int i=0; i<=9; i++)
                {
                   if(mp[i]%2!=0) 
                   temp++;
                }
              if(temp<=1) ans++;
    }
    
    
    

    helper( root->left, ans);
    helper( root->right,ans);
    mp[root->val]--;
  }
  
    int pseudoPalindromicPaths (TreeNode* root) {

        // vector<int> temp;

      int ans=0;
      helper( root,ans);
      return ans;
    }
};