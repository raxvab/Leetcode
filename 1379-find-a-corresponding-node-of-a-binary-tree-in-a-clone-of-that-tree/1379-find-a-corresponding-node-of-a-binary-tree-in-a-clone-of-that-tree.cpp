class Solution {
public:
    //Use DFS (Pre-order-traversal) 
	//Root-Left-Right approach in the dfs function
    void dfs(TreeNode* node, TreeNode* target, TreeNode* &res)
    {
        if(!node) return; //if node is NULL we return
        
        if(node->val == target->val)    //if node value is equal to the target value
        {
            res = node; //we store the node in res and return
            return;
        }
        
        dfs(node->left, target, res); //traverse left child of the node
        dfs(node->right, target, res);  //traverse right child of the node
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
       
        TreeNode* res;   //Define res node for storing result
        dfs(cloned, target, res);   //Calling dfs function
        return res; 
    }
};