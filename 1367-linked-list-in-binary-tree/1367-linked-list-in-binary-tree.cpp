/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
 bool isSubPath(ListNode* temp, TreeNode* root) {
        //if we reached the end of the tree 
       if(root==NULL) 
           return false;
     
      //if we find a path to match the pattern

        if(match(temp,root)) 
            return true;
          //Search for the pattern in left subtree and right subtree

        return isSubPath(temp,root->left)||isSubPath(temp,root->right);
    }
    bool match(ListNode* head, TreeNode* root)
    {   //if the head is null then we found a path
        if(!head) 
            return true;
     
         //we didn't find a match starting from this node
        if(!root||root->val!=head->val) 
            return false;
               //Continue matching from this node downwards

        return match(head->next,root->left)||match(head->next,root->right);
    }
        
        
        
        
    
};