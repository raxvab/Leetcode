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
    void dfs(TreeNode* root, int dist, int level, map<int, vector<pair<int, int>>> &m){
        if(!root)return;
        m[dist].push_back(make_pair(level, root->val));
        dfs(root->left, dist-1, level+1, m);
        dfs(root->right, dist+1, level+1, m);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int, int>>> m;
        vector<vector<int>> ans;
        
        dfs(root, 0, 0, m);
        for(auto it:m){
            sort(it.second.begin(), it.second.end());
            vector<int> tmp;
            for(auto i:it.second)tmp.push_back(i.second);
            ans.push_back(tmp);
        }
        return ans;
    }
};