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
class BSTIterator {
    private: stack<TreeNode*> s;
    
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
     bool hasNext() {
        return !s.empty();
    }
    int next() {
        TreeNode *tmp=s.top();
        s.pop();
        pushAll(tmp->right);
        return tmp->val;
        
    }
    private:
    void pushAll(TreeNode *node){
        for(;node!=NULL;s.push(node),node=node->left);
    }
    
   
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */