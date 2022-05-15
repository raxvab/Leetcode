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
    int h = 0;
    int height(TreeNode* root){
        
        if(root == NULL) return 0;
        return 1+ max(height(root->left), height(root->right));
    }
    
    int bfs(TreeNode* root)
    {
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int n= q.size();
            h--;
            for(int i = 0; i<n; i++){
                
                TreeNode* t= q.front();
                q.pop();
                if(h == 0) sum+= t->val;
                if(t-> left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            
            
        }
        return sum;
        
    }
    
    int deepestLeavesSum(TreeNode* root) {
        h = height(root);
        cout<<h<<endl;
        return bfs(root);
    }
};